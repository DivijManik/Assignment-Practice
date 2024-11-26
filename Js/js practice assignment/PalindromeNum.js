// Problem --->
// Given an integer n, return true if n is a palindrome
// , and false otherwise.

var isPalindrome = function (n = 0) {
    var num = n.toString();

    for (var i = 0; i < num.length; i++) {

        // logging for visualization
        console.log(num[i] + "  " + num[num.length - (i + 1)])

        if (num[i] != num[num.length - (i + 1)]) {
            return false;
        }
    }
    return true;
}

console.log(isPalindrome(757));
console.log(isPalindrome(5885));
console.log(isPalindrome(57815));