package com.Numeal.chernochat;

import java.awt.EventQueue;

import javax.swing.JFrame;
import javax.swing.JPanel;
import javax.swing.UIManager;
import javax.swing.border.EmptyBorder;
import javax.swing.JTextField;
import javax.swing.JLabel;

import java.awt.Font;

import javax.swing.JButton;
import java.awt.event.ActionListener;
import java.awt.event.ActionEvent;

public class Login extends JFrame {
	private static final long serialVersionUID = 1L;
	
	private JPanel contentPane;
	private JTextField txtName;
	private JTextField txtIPAddress;
	private JLabel lblIPAddress;
	private JLabel lblPort;
	private JTextField txtPort;
	private JLabel lblIPAddressDesc;
	private JLabel lblPortDesc;
	
	public Login() {
		try{
			UIManager.setLookAndFeel(UIManager.getSystemLookAndFeelClassName());
		}catch(Exception e){
			e.printStackTrace();
		}
		
		setResizable(false);
		setTitle("Login");
		setDefaultCloseOperation(JFrame.EXIT_ON_CLOSE);
		setSize(300, 380);
		setLocationRelativeTo(null);
		contentPane = new JPanel();
		contentPane.setBorder(new EmptyBorder(5, 5, 5, 5));
		setContentPane(contentPane);
		contentPane.setLayout(null);
		
		txtName = new JTextField();
		txtName.setBounds(66, 44, 161, 28);
		contentPane.add(txtName);
		txtName.setColumns(10);
		
		JLabel lblName = new JLabel("Name");
		lblName.setFont(new Font("Tahoma", Font.PLAIN, 14));
		lblName.setBounds(124, 21, 46, 14);
		contentPane.add(lblName);
		
		txtIPAddress = new JTextField();
		txtIPAddress.setBounds(66, 128, 161, 28);
		contentPane.add(txtIPAddress);
		txtIPAddress.setColumns(10);
		
		lblIPAddress = new JLabel("IP Address");
		lblIPAddress.setFont(new Font("Tahoma", Font.PLAIN, 14));
		lblIPAddress.setBounds(112, 105, 70, 14);
		contentPane.add(lblIPAddress);
		
		lblPort = new JLabel("Port");
		lblPort.setFont(new Font("Tahoma", Font.PLAIN, 14));
		lblPort.setBounds(134, 209, 26, 14);
		contentPane.add(lblPort);
		
		txtPort = new JTextField();
		txtPort.setColumns(10);
		txtPort.setBounds(66, 228, 161, 28);
		contentPane.add(txtPort);
		
		lblIPAddressDesc = new JLabel("ex: 192.428.0.2");
		lblIPAddressDesc.setBounds(107, 161, 79, 14);
		contentPane.add(lblIPAddressDesc);
		
		lblPortDesc = new JLabel("ex: 11100");
		lblPortDesc.setBounds(122, 262, 49, 14);
		contentPane.add(lblPortDesc);
		
		JButton btnLogin = new JButton("Login");
		btnLogin.addActionListener(new ActionListener() {//logins in user and his/her data
			public void actionPerformed(ActionEvent arg0) {
				String name = txtName.getText();
				int port = Integer.parseInt(txtPort.getText());
				String address = txtIPAddress.getText();
				login(name, address, port);
			}
		});
		btnLogin.setBounds(102, 302, 89, 23);
		contentPane.add(btnLogin);
	}
	
	/**Login stuff here.*/
	private void login(String name, String address, int port){
		dispose();
		new Client(name, address, port);
	}
	
	public static void main(String[] args) {
		EventQueue.invokeLater(new Runnable() {
			public void run() {
				try {
					Login frame = new Login();
					frame.setVisible(true);
				} catch (Exception e) {
					e.printStackTrace();
				}
			}
		});
	}
}