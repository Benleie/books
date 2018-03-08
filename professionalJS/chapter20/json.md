JSON parsed into a usable object in JavaScript  || XML parsed into a DOM document

JSON could be passed directly to eval() and didn’t require the creation of a DOM.

## Syntax
Simple Values: JSON strings must use double quotes to be valid (single quotes causes a syntax error).

Objects: object property names in JSON must always be double-quoted.

Arrays: Objects and arrays are typically top-level parts of a JSON data structure (even though this is not required)


## The JSON Object
 eval() could parse, interpret, and return the data as JavaScript objects and arrays. 

+ JSON.stringify()  serialize JavaScript objects into a JSON string
By default, without any extra white space or indentation

+ JSON.parse() parse JSON into a native JavaScript value 