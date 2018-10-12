//具体类
class BinarySplitter: public ISplitter{
};
class TxtSplitter : public ISplitter{
};
class PictureSplitter: public ISplitter{
};
class VideoSplitter : public ISplitter{
};
//具体工厂
class BinarySplitterFactory: public SplitterFactory{
	virtual ISplitter* CreateFactoy(){
		return new BinarySplitter();
	}
};
class TxtSplitterFactory: public SplitterFactory{
	virtual ISplitter* CreateFactoy(){
		return new TxtSplitter();
	}
};
class PictureSplitterFactory: public SplitterFactory{
	virtual ISplitter* CreateFactoy(){
		return new PictureSplitter();
	}
}; 
class VideoSplitterFactory: public SplitterFactory{
	virtual ISplitter* CreateFactoy(){
		return new VideoSplitter();
	}
};  
