package shop;
import javax.swing.JOptionPane;

public class LoginHome extends javax.swing.JFrame {
    public LoginHome() {
        initComponents();
    }
    @SuppressWarnings("unchecked")
    // <editor-fold defaultstate="collapsed" desc="Generated Code">//GEN-BEGIN:initComponents
    private void initComponents() {

        jPanel1 = new javax.swing.JPanel();
        pass = new javax.swing.JPasswordField();
        ok = new javax.swing.JButton();
        jLabel4 = new javax.swing.JLabel();
        jLabel3 = new javax.swing.JLabel();
        Uname = new javax.swing.JTextField();
        jLabel2 = new javax.swing.JLabel();

        setDefaultCloseOperation(javax.swing.WindowConstants.EXIT_ON_CLOSE);

        jPanel1.setLayout(null);

        pass.setBackground(new java.awt.Color(222, 216, 216));
        pass.addActionListener(new java.awt.event.ActionListener() {
            public void actionPerformed(java.awt.event.ActionEvent evt) {
                passActionPerformed(evt);
            }
        });
        jPanel1.add(pass);
        pass.setBounds(230, 210, 150, 30);

        ok.setBackground(new java.awt.Color(209, 175, 142));
        ok.setFont(new java.awt.Font("Verdana", 1, 12)); // NOI18N
        ok.setText("Loing");
        ok.setCursor(new java.awt.Cursor(java.awt.Cursor.HAND_CURSOR));
        ok.addActionListener(new java.awt.event.ActionListener() {
            public void actionPerformed(java.awt.event.ActionEvent evt) {
                okActionPerformed(evt);
            }
        });
        jPanel1.add(ok);
        ok.setBounds(270, 260, 110, 20);

        jLabel4.setFont(new java.awt.Font("Verdana", 1, 12)); // NOI18N
        jLabel4.setText("Password  ");
        jPanel1.add(jLabel4);
        jLabel4.setBounds(140, 210, 90, 30);

        jLabel3.setFont(new java.awt.Font("Verdana", 1, 12)); // NOI18N
        jLabel3.setText("Username ");
        jPanel1.add(jLabel3);
        jLabel3.setBounds(140, 170, 80, 30);

        Uname.setBackground(new java.awt.Color(233, 230, 230));
        Uname.setForeground(new java.awt.Color(51, 0, 0));
        Uname.addActionListener(new java.awt.event.ActionListener() {
            public void actionPerformed(java.awt.event.ActionEvent evt) {
                UnameActionPerformed(evt);
            }
        });
        jPanel1.add(Uname);
        Uname.setBounds(230, 170, 150, 30);

        jLabel2.setBackground(new java.awt.Color(204, 204, 255));
        jLabel2.setIcon(new javax.swing.ImageIcon(getClass().getResource("/shop/BLogin.jpg"))); // NOI18N
        jPanel1.add(jLabel2);
        jLabel2.setBounds(0, 0, 500, 480);

        javax.swing.GroupLayout layout = new javax.swing.GroupLayout(getContentPane());
        getContentPane().setLayout(layout);
        layout.setHorizontalGroup(
            layout.createParallelGroup(javax.swing.GroupLayout.Alignment.LEADING)
            .addComponent(jPanel1, javax.swing.GroupLayout.DEFAULT_SIZE, 500, Short.MAX_VALUE)
        );
        layout.setVerticalGroup(
            layout.createParallelGroup(javax.swing.GroupLayout.Alignment.LEADING)
            .addComponent(jPanel1, javax.swing.GroupLayout.DEFAULT_SIZE, 480, Short.MAX_VALUE)
        );

        pack();
    }// </editor-fold>//GEN-END:initComponents

    private void UnameActionPerformed(java.awt.event.ActionEvent evt) {//GEN-FIRST:event_UnameActionPerformed
        // TODO add your handling code here:
    }//GEN-LAST:event_UnameActionPerformed

    private void okActionPerformed(java.awt.event.ActionEvent evt) {//GEN-FIRST:event_okActionPerformed

        String n=Uname.getText();
        String p=pass.getText();
       if(n.equals("com")&&p.equals("it")) {
           System.out.println("welcome to clothes shop");
            JOptionPane.showMessageDialog(null,"User Found");
            Home h=new Home();
            h.setVisible(true);
       }
       else{
JOptionPane.showMessageDialog(null,"User not Found!");
    }//GEN-LAST:event_okActionPerformed
    }
    private void passActionPerformed(java.awt.event.ActionEvent evt) {//GEN-FIRST:event_passActionPerformed
        // TODO add your handling code here:
    }//GEN-LAST:event_passActionPerformed

    public static void main(String args[]) {
        java.awt.EventQueue.invokeLater(new Runnable() {
            public void run() {
                new LoginHome().setVisible(true);
            }
        });
    }

    // Variables declaration - do not modify//GEN-BEGIN:variables
    private javax.swing.JTextField Uname;
    private javax.swing.JLabel jLabel2;
    private javax.swing.JLabel jLabel3;
    private javax.swing.JLabel jLabel4;
    private javax.swing.JPanel jPanel1;
    private javax.swing.JButton ok;
    private javax.swing.JPasswordField pass;
    // End of variables declaration//GEN-END:variables
}
