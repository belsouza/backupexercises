package Foo;

	import java.awt.FlowLayout;
	import java.awt.event.ActionListener;
	import java.awt.event.ActionEvent;
	import javax.swing.JFrame;
	import javax.swing.JButton;
	import javax.swing.JTextField;
	
	//https://www.leepoint.net/GUI/components/30textfield/11textfield.html
	public class Aux2 extends JFrame{
		
		private static int p1;
		private static int p2;
		private static int p3;
		private static int p4;
	
		public Aux2(){
			
			super("Teste");
			setLayout(new FlowLayout());
			JTextField c1 = new JTextField(40);
			add(c1);
			JTextField c2 = new JTextField(40);
			add(c2);
			JTextField c3 = new JTextField(40);
			add(c3);
			JTextField c4 = new JTextField(40);
			add(c4);
			JButton c5 = new JButton("Proximo");
			add(c5);

			c5.addActionListener( new ActionListener() {
				this.p1 = Integer.parseInt( c1.getText() );
				this.p2 = Integer.parseInt( c2.getText() );
				this.p3 = Integer.parseInt( c3.getText() );
				this.p4 = Integer.parseInt( c4.getText() );

				JOptionPane.showMessageDialog(String.format("Foo: %d %d %d %d", p1, p2, p3, p4 ));
			});			
		}

			
	}
	
	