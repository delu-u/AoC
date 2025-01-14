import { Day1 } from "./day1.js";
import fs from "node:fs";

const start = performance.now();


console.log("  Day:          Part 1 / Part 2           Runtime");
Day1(fs.readFileSync("2017 - JavaScript\\1", "utf-8"));
console.log(`Total:                                    ${performance.now()-start}`);