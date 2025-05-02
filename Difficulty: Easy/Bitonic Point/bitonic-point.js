//{ Driver Code Starts
// Initial Template for javascript

'use strict';

process.stdin.resume();
process.stdin.setEncoding('utf-8');

let inputString = '';
let currentLine = 0;

process.stdin.on('data', inputStdin => { inputString += inputStdin; });

process.stdin.on('end', _ => {
    inputString =
        inputString.trim().split('\n').map(string => { return string.trim(); });

    main();
});

function readLine() { return inputString[currentLine++]; }

function main() {
    let t = parseInt(readLine());
    let i = 0;
    for (; i < t; i++) {

        let arr = readLine().split(' ').map(x => parseInt(x));
        let obj = new Solution();
        let res = obj.findMaximum(arr);
        console.log(res);
        console.log("~");
    }
}
// } Driver Code Ends


// User function Template for javascript

/**
 * @param {number[]} arr
 * @returns {number}
 */

class Solution {

    findMaximum(arr) {
        let bitonicpoint = null;
        for(let i =0;i<arr.length;i++){
            if(arr[i] > bitonicpoint) bitonicpoint = arr[i];
        }
        return bitonicpoint;
    }
}