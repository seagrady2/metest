use serde_json::json;

fn process(s: &str) -> &str {
    let json_as_object: Value = serde_json::from_str(s).unwrap();
    return json_as_object.to_string();
}

fn loadTest(filename: &str){


}

fn metests(filename: &str){


}

fn results( )

// This is the main function.
fn main() {

    let john = json!({
        "name": "John Doe",
        "age": 43,
        "phones": [
            "+44 1234567",
            "+44 2345678"
        ]
    });

    println!("first phone number: {}", john["phones"][0]);

    // Convert to a string of JSON and print it out
    println!("{}", john.to_string());

    // Print text to the console.
    println!("Hello World!");
}