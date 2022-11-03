
        function marks(english, maths, science)
        {
         var a = english + maths + science ;
         return a;
        }
        var total = marks(74,74,74);

        document.write("Total of the marks is " + total + "<br>");

        function pt(tt)
        {
            var c = tt/300*100;
            document.write(c)
        }
        document.write(" persantage of the marks is ");
        pt(total);