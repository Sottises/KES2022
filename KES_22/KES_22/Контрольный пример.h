integer function fact(integer N)			  $counting the factorial$
{
	type integer newN = N - 1;
	is N & 0
		true[return 1; ]
		false
		[
			N = N * fact(newN);
	return N;
		]
	return 1;
}

$integer function fact()
{
	type integer N = 10;
	is N
		true[return 1; ]
		false[return 2; ]

		return N;
}$


integer function Inlength(integer num)			$counting the length of the factorial$
{
	type integer len = 0;
	type integer tempNum = num;
	type integer degree = 1;
	while tempNum !0
		do
			[
				tempNum = num / pow(10, degree);
	degree = degree + 1;
			]
	len = degree - 1;
	return len;
}

main{
	type string str = "Dont give up";
	type integer len = lenght(str);				$counting the lenght of the string$
	type integer factorial = fact(len);			$counting the factorial of string lenght$
		write "String: ";
		writeline str;
		write "Length of string: ";
		writeline len;
		write "factorial: ";
		writeline factorial;

	type integer num = random(len);				$random number in the range of the string length$
		write "Random number: ";
		writeline num;

		is num > 0								$if the number is negative, make it positive$
			false[num = num * (-1); ]

		write "New random number: ";
		writeline num;

	type integer lenFact = Inlength(factorial);  $counting the lenght of the factorial$
		write "Number of digit in factorial: ";
		writeline lenFact;
}

