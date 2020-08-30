package Foo;

import javax.swing.JTextField;
import java.awt.Color;
import java.awt.Graphics;
import java.awt.FlowLayout;
import javax.swing.JPanel;
import java.util.*;

public class Aux1 extends JPanel{
	
	
	public void paintComponent( Graphics g ){
		super.paintComponent(g);
		g.setColor(Color.RED);
		g.fillRect(d1, d2, d3, d4);		
	}	
}