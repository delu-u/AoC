import { Day1 } from "./day1.js";
import { Day2 } from "./day2.js";
import fs from "node:fs";

const start = performance.now();


console.log("  Day:          Part 1 / Part 2           Runtime");
// Day1(fs.readFileSync("2017.js\\1", "utf-8"));
Day2(fs.readFileSync("2017.js\\2", "utf-8"));
console.log(`Total:                                    ${performance.now()-start}`);