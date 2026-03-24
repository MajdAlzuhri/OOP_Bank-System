# 📌 Bank System & Currency Exchange (OOP)

## 📖 Overview

This project — **Bank System & Currency Exchange (OOP)** — is an advanced console-based application built using C++ and Object-Oriented Programming principles.

It combines a complete **Bank Management System** with an integrated **Currency Exchange module**, demonstrating how large systems are built by connecting smaller, well-structured components.

The project simulates real-world banking operations such as managing clients, handling transactions, and performing currency conversions within a unified system.

---

## 🎯 Learning Purpose

This project is part of a practical journey in mastering Object-Oriented Programming (OOP).

Through this system, we learn how to:

* Analyze and design real-world systems
* Apply OOP principles (Encapsulation, Abstraction, Inheritance)
* Build scalable and maintainable applications
* Integrate multiple subsystems into one project
* Work with file handling for persistent data storage

---

## 🏦 Main System (Bank System)

The Bank System provides core banking functionalities:

* Add new clients
* Delete clients
* Update client information
* Find clients
* Display client list
* Deposit & Withdraw operations
* View total balances

---

## 💱 Currency Exchange Module

This module is integrated داخل النظام الأساسي ويوفر:

### 1️⃣ List Currencies

Displays all available currencies with:

* Country
* Currency Code
* Currency Name
* Exchange Rate

---

### 2️⃣ Find Currency

Search for a currency using:

* Country Name
* Currency Code

---

### 3️⃣ Update Rate

Allows updating the exchange rate of a selected currency with confirmation.

---

### 4️⃣ Currency Calculator

Converts values between currencies:

* Direct conversion if USD is involved
* Otherwise: Currency A → USD → Currency B

---

### 5️⃣ Main Menu

Returns to the main banking system.

---

## 🧠 Educational Insight

This project demonstrates a key software engineering concept:

**“Large systems are built from smaller, connected subsystems.”**

By integrating the Currency Exchange module into the Bank System, we simulate how real-world applications grow and evolve over time.

---

## 🧩 Project Philosophy

This system is designed using core OOP principles:

* **Encapsulation** → Organizing data within classes
* **Abstraction** → Simplifying system interaction
* **Inheritance** → Reusing and extending functionality
* **Modularity** → Dividing the system into manageable components

---

## 🔧 Technologies

* 💻 C++ (OOP)
* 🧱 File Handling (Data Storage)
* 🧩 Modular Class Design
* 🧮 Console Application (CLI)

---

## 🏗️ Suggested Folder Structure

📂 Bank-System-and-CurrencyExchange
┣ 📁 Core
┃ ┣ clsPerson.h / clsUser.h / clsBankClient.h
┃ ┗ clsScreen.h / clsMainScreen.h
┣ 📁 BusinessLogic
┃ ┣ clsCurrency.h / clsCurrencyExchange.h
┃ ┗ Transactions & Access Control
┣ 📁 Data
┃ ┗ Clients & Currencies Files
┣ 📁 UI
┃ ┣ Bank Screens
┃ ┗ Currency Exchange Screens
┗ main.cpp

---
