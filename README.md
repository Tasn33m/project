<!DOCTYPE html>
<html lang="en">
<head>
    <meta charset="UTF-8">
    <meta name="viewport" content="width=device-width, initial-scale=1.0">
    
</head>
<body>

    <h1>Bank System </h1>

    <h2>Project Overview</h2>
    <p>
        This is a simple console-based Bank System that allows users to create an account, make deposits, withdrawals, and close their account.
        The system simulates a banking system where the user can interact with their account using their unique account ID and balance.
    </p>

    <h2>Features</h2>
    <ul>
        <li>Create a new bank account with a unique ID and initial balance.</li>
        <li>Withdraw money from the account, ensuring there are sufficient funds.</li>
        <li>Deposit money into the account.</li>
        <li>Close the account permanently.</li>
        <li>All user inputs are validated for correctness and error handling.</li>
    </ul>

    <h2>How to Use</h2>
    <p>Follow the steps below to use the Bank System:</p>
    <ol>
        <li>Run the program. You will be prompted to create a new account.</li>
        <li>Enter a unique account ID (positive number) and an initial balance (non-negative value).</li>
        <li>Once your account is created, you can choose from the following operations:</li>
        <ul>
            <li>Withdraw money from your account.</li>
            <li>Deposit money into your account.</li>
            <li>Close your account permanently.</li>
            <li>Exit the program.</li>
        </ul>
        <li>To proceed with any operation, input your account ID and select the desired option.</li>
    </ol>

    <h2>Code Structure</h2>
    <p>The project consists of a single C++ file:</p>
    <pre>
        - bank_system.cpp
    </pre>

    <h2>Important Functions</h2>
    <ul>
        <li><strong>createAccount:</strong> Initializes the account with a unique ID, initial balance, and account holder's name.</li>
        <li><strong>withdraw:</strong> Allows the user to withdraw money, ensuring there are sufficient funds.</li>
        <li><strong>deposit:</strong> Allows the user to deposit money into their account.</li>
        <li><strong>closeAccount:</strong> Closes the account permanently.</li>
    </ul>

    <h2>Example Input/Output</h2>
    <p>Here is a simple interaction example with the system:</p>
    <pre>
        Welcome! Please create an account
        Please Enter ID: 123
        Please Enter Initial Balance: 1000
        Please Enter Your Name: John Doe

        Your Account is Created Successfully!
        Your Name: John Doe
        Your ID: 123
        Your Initial Balance: 1000

        Please Enter your ID to proceed: 123

        Choose an operation:
        1. Withdraw
        2. Deposit
        3. Close Account
        4. Exit
        Enter your choice: 1
        Enter amount to withdraw: 500
        Your New Balance is 500

        Choose an operation:
        1. Withdraw
        2. Deposit
        3. Close Account
        4. Exit
        Enter your choice: 4
        Exiting program. Goodbye!
    </pre>

    <h2>Requirements</h2>
    <ul>
        <li>C++ compiler (such as g++, MinGW, or any IDE that supports C++ programming).</li>
    </ul>

    <h2>License</h2>
    <p>This project is open-source. Feel free to use, modify, or redistribute it according to your needs.</p>

</body>
</html>
