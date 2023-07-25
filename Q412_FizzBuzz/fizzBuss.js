/**
 * @param {number} n
 * @return {string[]}
 */
var fizzBuzz = function(n) {
    var fizzBuzzList =[];
    var count =1;
    while(count <= n){

        if(count%3===0 && count%5===0){

            fizzBuzzList.push("FizzBuzz");

        }

        else if(count%5===0){

            fizzBuzzList.push("Buzz");
          
        }

        else if(count%3===0){

            fizzBuzzList.push("Fizz");

        }

        else{

            fizzBuzzList.push(""+count+"");

        }

          count++;

    }

    return fizzBuzzList;
};
