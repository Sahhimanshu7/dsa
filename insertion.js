// Insertion sort first attempt

function insertionSort(inputArr){
	let key = inputArr.length;
		
	// First loop for the insertion sort
		for( let i = 1; i<key; i++){
			let current = inputArr[i];

			let j = i-1;
			while( j > -1 && current < inputArr[j]){
				inputArr[j+1] = inputArr[j];
				j = j-1;
			}
			inputArr[j+1] = current;
		}
}

let inputArr = [1,5,4,2,7];
insertionSort(inputArr);
console.log(inputArr);

// Insertion sort in decreasing order

function insertionSortDec(inputArr){
	let key = inputArr.length;
		
	// First loop for the insertion sort
		for( let i = 1; i<key; i++){
			let current = inputArr[i];

			let j = i-1;
			while( j > -1 && current > inputArr[j]){
				inputArr[j+1] = inputArr[j];
				j = j-1;
			}
			inputArr[j+1] = current;
		}
}

let inputArr1 = [1,5,4,2,7];
insertionSortDec(inputArr1);
console.log(inputArr1);
