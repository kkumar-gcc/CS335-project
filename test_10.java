class UniversalGUI{
	JFrame jframe;
	DatabaseDriver dd = new DatabaseDriver();

	void initFrame()
	{
		jframe = new JFrame("Universal GUI");
		jframe.setSize(new Dimension(500,500));
	}

	

	public UniversalGUI()
	{
		initFrame();
	}

	public static void main(String args[])
	{
		new UniversalGUI();
	}

}