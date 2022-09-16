package com.alip;

import javafx.geometry.Pos;
import javafx.scene.Parent;
import javafx.scene.control.Alert;
import javafx.scene.control.Button;
import javafx.scene.control.Hyperlink;
import javafx.scene.control.PasswordField;
import javafx.scene.control.TextField;
import javafx.scene.control.Alert.AlertType;
import javafx.scene.layout.BorderPane;
import javafx.scene.layout.GridPane;
import javafx.scene.text.Text;

public class Login {
    
    Text welcome = new Text();
    Button button = new Button();
    Hyperlink hl = new Hyperlink();
    Text user = new Text(); TextField username = new TextField();
    Text pass = new Text(); PasswordField password = new PasswordField();
    Alert alert = new Alert(AlertType.ERROR);
    BorderPane borderPane = new BorderPane();
    GridPane gridPane = new GridPane();
    


    public Parent login(){
        welcome.setText("WELCOME TO MANDALA");
        button.setText("Login");
        user.setText("Username :");
        pass.setText("Password :");
        username.setPromptText("20211037xxxxxx");
        password.setPromptText("password");
        gridPane.setAlignment(Pos.CENTER);
        gridPane.add(user, 0, 0);
        gridPane.add(username, 0, 1);
        gridPane.add(pass, 1, 0);
        gridPane.add(password, 1, 1);
        gridPane.add(button, 2, 1);
        borderPane.setTop(welcome);
        borderPane.setCenter(gridPane);
        return borderPane;
    }
}
