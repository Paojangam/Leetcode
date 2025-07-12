/**
 * @param {number[]} arr
 * @param {Function} fn
 * @return {number[]}
 */
var map = function(arr, fn) {
    let result = [];

    for (let i = 0; i < arr.length; i++) {
        // Apply the function to each element and its index
        const transformed = fn(arr[i], i);
        result.push(transformed); // Add the result to the new array
    }

    return result;
};

