import sys
from PyQt5 import QtCore, QtWidgets
from PyQt5.QtWidgets import QMainWindow, QLabel, QGridLayout, QWidget
from PyQt5.QtCore import QSize    
import seaborn as sns
import pandas as pd

class HelloWindow(QMainWindow):
    def __init__(self):
        QMainWindow.__init__(self)

        df = pd.read_csv("demo_df12.csv")
        print(df.head())
        #sns.distplot(df["OBJECT_ID"],bins=5)
        self.setMinimumSize(QSize(640, 480))    
        self.setWindowTitle("Hello world")

        title = QLabel("Hello World from PyQt this is to show this", self)
        title.move(50,50)
        

if __name__ == "__main__":
    app = QtWidgets.QApplication(sys.argv)
    mainWin = HelloWindow()
    mainWin.show()
    sys.exit( app.exec_() )