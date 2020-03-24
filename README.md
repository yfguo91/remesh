This is a project with vs2010 to remesh surface triangular mesh. There are still a little bugs need to repair, but it does not affect your using. The program uses no third lib, so it is easy to be reappeared.  

I also have a more robust (almost without bugs) and fast (3 times) version, if you want, please email me.  

There are ten examples available in the repository you can use to check the performance of the program.   

Using same parameter as bellow, you will get the same results as ours.  
For joint mesh, mparam.maxh=0.035 and mparam.minh=0.03.   
For fandisk mesh, mparam.maxh=0.15 and mparam.minh=0.1.   
For homer mesh, mparam.maxh=0.01 and mparam.minh=0.002.   
For torous mesh, mparam.maxh=1.0 and mparam.minh=0.7.   
For bone mesh, mparam.maxh=10.0 and mparam.minh=2.0.   
For Substrate mesh, mparam.maxh=100.0 and mparam.minh=5.0.   
For Spline mesh, mparam.maxh=10.0 and mparam.minh=5.0;   
For Valve mesh, mparam.maxh=10.0 and mparam.minh=0.5.  

We also implemented a simple algorithm to clean unnecessary features, please open on the function "FixGeometry" in the "stlgeom.cpp" file. There are also two examples.  
For horse mesh, mparam.maxh=0.02 and mparam.minh=0.01.   
For elk mesh, mparam.maxh=1.5 and mparam.minh=1.2.   

Hope our program can help you and any problem, please contact me.
