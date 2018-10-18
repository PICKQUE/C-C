
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
			//���ļ���
		}
		virtual void wirte(int data) {
			//д�ļ���
		}
		virtual void seek(int position) {
			//��λ�ļ���
		}
};
class NetworkStream: public stream {
	public:
		virtual char read(int number) {
			//���ļ���
		}
		virtual void wirte(int data) {
			//д�ļ���
		}
		virtual void seek(int position) {
			//��λ�ļ���
		}
};
class MemoryStream :public stream{
public:
    virtual char Read(int number){
        //���ڴ���
    }
    virtual void Seek(int position){
        //��λ�ڴ���
    }
    virtual void Write(char data){
        //д�ڴ���
    }
    
};
//��չ����
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
			//����ļ��ܲ���..... 
			stream->read(number);
			//����ļ��ܲ���..... 
		}
		virtual void seek(int position){
			//����ļ��ܲ���....
			stream->seek(position);
			//����ļ��ܲ���.... 
		}
		virtual void wirte(char data){
			//����ļ��ܲ���....
			stream->write(data);
			//����ļ��ܲ���.... 
		}
		
};
class BufferedStream : public DecoratorStream{
    
    stream* stream;//������ 
    
public:
    BufferedStream(stream* stm):DecoratorStream(stm){
        
    }
    //...
};
void process(){
	//����ʱװ��
	FileStream *s1=new FileStream();
	
	CrytoStream *s2=new CrytoStream(s1);
	BufferedStream *s3=new BufferedStream(s1);
	//�������ݻ����� 
	BufferedStream *s4=new BufferedStream(s2);
}
#endif
// 
