package Foo;

import javax.swing.JFrame;

public class Foo{
	
	public static void main( String[] args ){
		
		Aux2 ban = new Aux2();
		ban.setDefaultCloseOperation(JFrame.EXIT_ON_CLOSE);	
		ban.setSize(275,100);
		ban.setVisible(true);
	}	
}