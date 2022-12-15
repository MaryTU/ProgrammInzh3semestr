slove(X,Y,Z):- Z is (sin(X)*sin(X)+cos(Y)*cos(Y))*2.

:- writeln("уравнение вида z=(sin(x)^2+cos(y)^2)*2").
?- slove(1,2,Z),write("при X=1 и Y=2: Z="),writeln(Z).
?- slove(5,5,Z),write("при X=5 и Y=5: Z="),writeln(Z).

