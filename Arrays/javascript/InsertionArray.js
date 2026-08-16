let A = [10, 20, 30, 40, 50];
let x = 25;
let pos = 2;

A.push(0);

for (let i = A.length - 2; i >=pos; i--){
    A[i +1] = A[i];
}

A[pos] =  x;

console.log("Array after insertion: ", A);
