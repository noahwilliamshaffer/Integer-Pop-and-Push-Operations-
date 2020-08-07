//pop operation:
pop = x % 10;
x /= 10;

//push operation:
temp = rev * 10 + pop;
rev = temp;

//However, this approach is dangerous, because the statement \text{temp} = \text{rev} \cdot 10 + \text{pop}temp=rev⋅10+pop can cause overflow.

//Luckily, it is easy to check beforehand whether or this statement would cause an overflow.

//To explain, lets assume that \text{rev}rev is positive.
