package com.alip;

import javafx.application.Application;
import javafx.scene.Scene;
import javafx.stage.Stage;


public class App extends Application{
    @Override
    public void start(Stage arg0) throws Exception {
        Scene scene1 = new Scene(new Login().login());
        arg0.setScene(scene1);
        arg0.show();
    }
    public static void main(String[] args) {
        launch();
    }
}