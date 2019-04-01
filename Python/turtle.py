
import turtle

my_turtle = turtle.Turtle()
    
def square():
    for i in range(4):
        my_turtle.forward(50);
        my_turtle.left(90);

for j in range(1000):
    square();
    my_turtle.right(11);
    
