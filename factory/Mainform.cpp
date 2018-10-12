class MainForm:Form{
	private:
		SplitterFactory* factory;
	public:
		MainForm(SplitterFactory* factory){
			this->factory=factory;
		}
		void Button_1_click(){
			
			ISplitter *splitter=
					factory->CreateFactory();//ÒÀÀµ¾ßÌåÀà 
			splitter->split();
		}
		
};
