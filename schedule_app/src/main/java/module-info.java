module com.alip {
    requires transitive javafx.graphics;
    requires javafx.controls;
    requires javafx.fxml;
    
    opens com.alip to javafx.fxml;
    exports com.alip;
}
