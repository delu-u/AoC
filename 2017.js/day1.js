export function Day1(input){
    const start = performance.now();
    console.log(`    1: ${Part1(input).toString().padStart(15)} / ${Part2(input).toString().padEnd(15)}  ${performance.now()-start}`);
}

function Part1(input){
    var sum = 0
    for(var i = 0; i < input.length; i++){
        if(input[i] == input[(i+1)%input.length]) sum += parseInt(input[i]);
    }
    return sum;
}

function Part2(input){
    var sum = 0
    for(var i = 0; i < input.length; i++){
        if(input[i] == input[(i+input.length/2)%input.length]) sum += parseInt(input[i]);
    }
    return sum;
}