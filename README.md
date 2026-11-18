<div align="center">

# 💻 Module 8: Functions
### *Breaking programs into reusable pieces (and trying not to break myself)*

![Language](https://img.shields.io/badge/Language-C-blue?style=for-the-badge&logo=c)
![Module](https://img.shields.io/badge/Module-8-green?style=for-the-badge)
![Status](https://img.shields.io/badge/Status-Submitted-success?style=for-the-badge)

</div>

---

## 👋 Hello, Sir ERIC MAGTO!

Thank you for checking my work. Before you read my code, here is a short, honest message about how this module went for me.

## 📂 What's Inside `module8-functions/`

| # | File | What it does |
|---|------|--------------|
| 1 | `factorial.c` | Computes n! using a loop |
| 2 | `bmi_functions.c` | BMI Categorizer split into 2 functions |
| 3 | `temp_converter.c` | Celsius ⇄ Fahrenheit with a switch menu |
| 4 | `pass_by_value.c` | Shows that C passes copies, not originals |
| 5 | `airplane_booking_functions.c` | Airplane booking split into 3 functions |

---

## 😅 My Struggles (a.k.a. The Honest Part)

### 🧩 1. "Why do I have to write the function twice?"
At first I didn't understand prototypes. Then I learned the compiler reads top to bottom, so it needs to hear about a function *before* `main()` calls it.

### 🔁 2. Return or void?
Deciding which functions return a value and which just print was confusing. Now I follow one rule: **if `main()` needs the answer, return it. If it only needs to be shown, make it `void`.**

### 🎭 3. The Pass-by-Value Plot Twist
I was 100% sure my number would double in `main()`. It stayed **7**. 😭
Turns out C only gives the function a *copy*, so the original never finds out what happened.

### 🐛 4. The Small Stuff That Cost Me Time
- Forgetting `break` in a `switch`
- A BMI range gap that left some values with no category
- `scanf(" %c")` needing that tiny space before `%c`

### 🔧 5. Git Gave Me Trouble Too
- I tried to push **before** making a commit (the error: *"src refspec main does not match any"*)
- I accidentally uploaded `.exe` files
- Lesson learned: **commit first, and never upload compiled files**

---

## 🎓 What I Learned

- ✅ Functions make code cleaner and reusable
- ✅ Parameters are copies, and `return` sends the answer back
- ✅ Every problem is easier once you break it into small pieces

---

## ▶️ How to Run

```bash
gcc factorial.c -o factorial
./factorial
```

---

<div align="center">

### 🙏 Thank you for reading!
*Submitted by **FLORES** · PROG1*

</div>
