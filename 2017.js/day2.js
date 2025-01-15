export function Day2(input){
    const start = performance.now();
    console.log(`    2: ${Part1(input.split('\n')).toString().padStart(15)} / ${Part2(input.split('\n')).toString().padEnd(15)}  ${performance.now()-start}`);
}

function Part1(input){
    var sum = 0
    for(var i = 0; i < input.length; i++){
        var line = input[i].split('\t')
        sum += Math.max(...line)-Math.min(...line)
    }
    return sum;
}

function Part2(input){
    var sum = 0
    for(var i = 0; i < input.length; i++){
        var line = input[i].split('\t')
        for(var a = 0; a < line.length; a++){
            for(var b = 0; b < line.length; b++){
                if(a!=b && line[a]%line[b]==0){
                    sum += line[a]/line[b]
                }
            }
        }
    }
    return sum;
}