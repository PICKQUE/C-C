//抽象类 
class ISplitter{
	public:
		virtual void split()=0;
		virtual ~ISplitter(){}
};

// 工厂基类
class SplitterFactory{
	public:
		virtual ISplitter *CreateFactory()=0;
		virtual ~SplitterFactory(){}
}; 

