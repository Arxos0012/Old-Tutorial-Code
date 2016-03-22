import javax.swing.JFrame;
import javax.swing.JLabel;

public class Start extends JFrame{
	private static final long serialVersionUID = 1L;

	private int width = 800, height = 600;
	
	private JLabel info;
	
	public Start(){
		info = new JLabel("Hello there, Sir!");
		info.setHorizontalTextPosition(JLabel.CENTER);
		add(info);
		setUp();
		info.setBounds(width/2-50, height/2-50, 100, 100);
		//info.setBackground(Color.BLACK);
	}
	
	private void setUp(){
		setTitle("PowerRush Project Launcher");
		setSize(width, height);
		setVisible(true);
		setResizable(false);
		setLocationRelativeTo(null);
		setDefaultCloseOperation(JFrame.EXIT_ON_CLOSE);
	}
	
	public static void main(String[] args){
		new Start();
	}
	
}
