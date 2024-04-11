#!/usr/bin/node
// reverse a list
exports.esrever = function (list) {
  return list.reduceRight(function (array, current) {
    array.push(current);
    return array;
  }, []);
};
