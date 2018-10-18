
class stream {
	public:
		virtual char read(int number)=0;
		virtual void write(char data)=0;
		virtual void seek(int position)=0;

		virtual ~stream();
};
class FileStream : public stream {
	public:
		virtual char read(int number) {
			//读文件流
		}
		virtual void wirte(int data) {
			//写文件流
		}
		virtual void seek(int position) {
			//定位文件流
		}
};
class NetworkStream: public stream {
	public:
		virtual char read(int number) {
			//读文件流
		}
		virtual void wirte(int data) {
			//写文件流
		}
		virtual void seek(int position) {
			//定位文件流
		}
};
class MemoryStream :public stream{
public:
    virtual char Read(int number){
        //读内存流
    }
    virtual void Seek(int position){
        //定位内存流
    }
    virtual void Write(char data){
        //写内存流
    }
    
};
//扩展操作
class DecoratorStream :public stream{
	public:
		stream* stream;
		DecoratorStream(stream *stm){
			this->stream=stm;
		}
		
};
class CrytoStream :public DecoratorStream{
	public:
		CrytoStream(stream* stm)
		:DecoratorStream(stm)
		{}
		virtual char read(int number){
			//额外的加密操作..... 
			stream->read(number);
			//额外的加密操作..... 
		}
		virtual void seek(int position){
			//额外的加密操作....
			stream->seek(position);
			//额外的加密操作.... 
		}
		virtual void wirte(char data){
			//额外的加密操作....
			stream->write(data);
			//额外的加密操作.... 
		}
		
};
class BufferedStream : public DecoratorStream{
    
    stream* stream;//缓冲区 
    
public:
    BufferedStream(stream* stm):DecoratorStream(stm){
        
    }
    //...
};
void process(){
	//运行时装配
	FileStream *s1=new FileStream();
	
	CrytoStream *s2=new CrytoStream(s1);
	BufferedStream *s3=new BufferedStream(s1);
	//加密数据缓冲流 
	BufferedStream *s4=new BufferedStream(s2);
}
#endif
// 
