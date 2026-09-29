# 🐾 Pet Raising Project

> **A C++17 OOP virtual pet raising application combined with an educational learning system.**

Pet Raising Project is a desktop application developed in **C++ using Object-Oriented Programming (OOP)** and **Qt 6**.

The project combines virtual pet care with learning activities, quests, rewards, achievements, inventory management, and user progress.

---

## 📌 Overview

The application is designed around the idea of raising a virtual pet while encouraging users to complete educational activities.

Users can interact with their pets, manage food and items, complete quests, participate in exercises, earn rewards, unlock achievements, and track their learning progress.

### 🎯 Main Goals

* Apply **Object-Oriented Programming** principles in a practical project.
* Build a modular C++ application with multiple interacting systems.
* Provide a graphical user interface using **Qt 6**.
* Combine virtual pet mechanics with educational activities.
* Practice software architecture, Git collaboration, testing, and documentation.

---

## ✨ Features

### 🐾 Pet System

* Manage virtual pets.
* Track pet-related information and states.
* Provide the foundation for pet-raising gameplay.

### 🍎 Food System

* Manage different types of food.
* Use food as part of pet-care interactions.

### 🎒 Inventory System

* Store and manage collected items.
* Connect items with other game systems.

### 📚 Education System

* Organize educational content.
* Connect learning activities with the game progression.

### 📝 Exercise System

* Provide exercises and answer-checking functionality.
* Support educational gameplay.

### 🎯 Quest System

* Manage quests and objectives.
* Connect activities with rewards and progression.

### 🏆 Achievement System

* Track completed achievements.
* Reward users for reaching specific milestones.

### 🎁 Reward System

* Manage rewards obtained through quests and activities.
* Connect rewards with progression and achievements.

### 📈 Progress System

* Track user progress.
* Provide a foundation for measuring learning and gameplay development.

### ♈ Zodiac System

* Manage zodiac-related information used by the application.

### 👤 User System

* Manage user-related information.
* Provide the foundation for login and user-specific data.

### 🖥️ Qt GUI

* Desktop graphical interface built with **Qt 6 Widgets**.
* Login interface.
* Main application window.

---

# 🏗️ Architecture

The project is organized into independent modules so that each major feature can be developed and maintained separately.

```text
                         ┌──────────────────────┐
                         │      Qt GUI          │
                         │ MainWindow / Login   │
                         └──────────┬───────────┘
                                    │
                                    ▼
                         ┌──────────────────────┐
                         │     Game System      │
                         └──────────┬───────────┘
                                    │
             ┌──────────────────────┼──────────────────────┐
             ▼                      ▼                      ▼
       ┌───────────┐          ┌───────────┐          ┌───────────┐
       │ Pet       │          │ Education │          │ Quest     │
       │ System    │          │ System    │          │ System    │
       └─────┬─────┘          └─────┬─────┘          └─────┬─────┘
             │                      │                      │
             └──────────────┬───────┴──────────────┬───────┘
                            ▼                      ▼
                     ┌────────────┐         ┌────────────┐
                     │ Food /     │         │ Exercise   │
                     │ Inventory  │         │ System     │
                     └─────┬──────┘         └─────┬──────┘
                           │                      │
                           └──────────┬───────────┘
                                      ▼
                           ┌────────────────────┐
                           │ Reward / Achievement│
                           └─────────┬──────────┘
                                     ▼
                           ┌────────────────────┐
                           │  Progress System   │
                           └────────────────────┘
```

> The diagram represents the project's modular organization and intended interaction between major systems.

---

# 📂 Project Structure

```text
Pet_Raising_Project/
│
├── CMakeLists.txt
├── README.md
├── build.ps1
│
├── data/
│   ├── achievements/
│   ├── exercises/
│   ├── foods/
│   ├── pets/
│   ├── quests/
│   ├── subjects/
│   ├── topics/
│   └── users/
│
├── docs/
│   ├── Architecture.md
│   ├── DevelopmentRoadmap.md
│   ├── EducationSystem.md
│   ├── ExerciseSystem.md
│   ├── GameFlow.md
│   ├── OOPDesign.md
│   ├── PetSystem.md
│   ├── ProgressSystem.md
│   ├── RewardSystem.md
│   └── ZodiacSystem.md
│
├── include/
│   ├── Achievement/
│   ├── Common/
│   ├── Education/
│   ├── Food/
│   ├── Game/
│   ├── Inventory/
│   ├── Pet/
│   ├── Progress/
│   ├── Quest/
│   ├── Reward/
│   ├── User/
│   └── Zodiac/
│
├── src/
│   ├── main.cpp
│   ├── MainWindow.cpp
│   ├── MainWindow.h
│   ├── LoginDialog.cpp
│   ├── LoginDialog.h
│   │
│   ├── Achievement/
│   ├── Common/
│   ├── Education/
│   ├── Food/
│   ├── Game/
│   ├── Inventory/
│   ├── Pet/
│   ├── Progress/
│   ├── Quest/
│   ├── Reward/
│   ├── User/
│   └── Zodiac/
│
└── tests/
    ├── AchievementTests.cpp
    ├── AnswerCheckerTests.cpp
    ├── ExerciseTests.cpp
    ├── FoodTests.cpp
    ├── InventoryTests.cpp
    ├── PetTests.cpp
    ├── ProgressTests.cpp
    ├── QuestTests.cpp
    ├── RewardTests.cpp
    └── ZodiacTests.cpp
```

---

# 🛠️ Technologies

| Technology       | Purpose                                    |
| ---------------- | ------------------------------------------ |
| **C++17**        | Main programming language                  |
| **OOP**          | Application architecture and system design |
| **Qt 6.11.2**    | Desktop GUI                                |
| **Qt Widgets**   | Graphical user interface                   |
| **MinGW 13.1.0** | C++ compiler                               |
| **CMake 4.4.0**  | Project configuration and build system     |
| **PowerShell**   | Build automation                           |
| **Git**          | Version control                            |
| **GitHub**       | Source code collaboration                  |

---

# 💻 Requirements

Before building the project, make sure the following are installed:

* Windows
* C++17 compatible compiler
* Qt 6.11.2
* MinGW 13.1.0
* CMake 4.4.0 or compatible version
* PowerShell
* Git

The current development environment uses:

```text
Qt      : 6.11.2
MinGW   : 13.1.0
CMake   : 4.4.0
C++     : C++17
```

---

# 🚀 Getting Started

## 1. Clone the repository

```bash
git clone <repository-url>
```

Enter the project directory:

```bash
cd Pet_Raising_Project
```

---

# 🔨 Build the Project

The project provides a PowerShell build script:

```powershell
.\build.ps1
```

The script automatically:

1. Checks the required Qt and MinGW environment.
2. Configures the project with CMake.
3. Uses the Qt-provided MinGW compiler.
4. Builds the project.
5. Generates the application executable.

The resulting executable is:

```text
build/PetRaising.exe
```

### Manual CMake Build

The equivalent CMake workflow is:

```powershell
cmake -S . -B build -G "MinGW Makefiles" `
  -DCMAKE_CXX_COMPILER="C:/Qt/Tools/mingw1310_64/bin/g++.exe" `
  -DCMAKE_MAKE_PROGRAM="C:/Qt/Tools/mingw1310_64/bin/mingw32-make.exe" `
  -DCMAKE_PREFIX_PATH="C:/Qt/6.11.2/mingw_64"

cmake --build build --parallel
```

> The `build/` directory contains generated build files and should not be committed to Git.

---

# ▶️ Run the Application

After a successful build:

```powershell
.\build\PetRaising.exe
```

---

# 🧪 Testing

The project contains separate test files for major systems:

```text
tests/
├── AchievementTests.cpp
├── AnswerCheckerTests.cpp
├── ExerciseTests.cpp
├── FoodTests.cpp
├── InventoryTests.cpp
├── PetTests.cpp
├── ProgressTests.cpp
├── QuestTests.cpp
├── RewardTests.cpp
└── ZodiacTests.cpp
```

Testing focuses on individual systems and important application logic.

---

# 📖 Documentation

Detailed design documents are available in the `docs/` directory.

| Document                | Description                  |
| ----------------------- | ---------------------------- |
| `Architecture.md`       | Overall project architecture |
| `DevelopmentRoadmap.md` | Development roadmap          |
| `EducationSystem.md`    | Education system             |
| `ExerciseSystem.md`     | Exercise system              |
| `GameFlow.md`           | Application/game flow        |
| `OOPDesign.md`          | OOP design                   |
| `PetSystem.md`          | Pet system                   |
| `ProgressSystem.md`     | Progress tracking            |
| `RewardSystem.md`       | Reward system                |
| `ZodiacSystem.md`       | Zodiac system                |

---

# 🧩 OOP Design

The project is designed around core Object-Oriented Programming principles.

### Encapsulation

Data and related behavior are grouped inside classes, with access controlled through appropriate interfaces.

### Abstraction

Complex system logic is separated behind clear interfaces so individual modules can be used without exposing unnecessary implementation details.

### Inheritance

Inheritance can be used where multiple objects share common characteristics or behaviors.

### Polymorphism

Polymorphism allows related objects to provide different implementations of shared interfaces or behaviors.

More details:

```text
docs/OOPDesign.md
```

---

# 🌿 Git Workflow

The project is developed using a feature-based Git workflow.

```text
main
  │
  ▼
develop
  │
  ├── feature/pet-system
  ├── feature/education-system
  ├── feature/quest-system
  ├── feature/inventory-system
  └── feature/gui
```

### Recommended workflow

Create a feature branch:

```bash
git checkout develop
git pull
git checkout -b feature/your-feature
```

Commit your changes:

```bash
git add .
git commit -m "Add your feature"
```

Push the branch:

```bash
git push -u origin feature/your-feature
```

Then create a Pull Request to:

```text
feature/* → develop
```

After integration and verification:

```text
develop → main
```

---

# 🗺️ Development Roadmap

### Phase 1 — Project Foundation

* [x] Project structure
* [x] C++17 configuration
* [x] Qt 6 GUI foundation
* [x] CMake configuration
* [x] PowerShell build script
* [x] Git/GitHub workflow

### Phase 2 — Core Systems

* [ ] Pet System
* [ ] Food System
* [ ] Inventory System
* [ ] Quest System
* [ ] Reward System
* [ ] Achievement System
* [ ] Progress System

### Phase 3 — Education

* [ ] Education System
* [ ] Exercise System
* [ ] Subjects and topics
* [ ] Answer checking
* [ ] Learning progress integration

### Phase 4 — GUI & Integration

* [ ] Complete main interface
* [ ] Connect GUI with core systems
* [ ] Improve user experience
* [ ] Integrate gameplay and education flow

### Phase 5 — Finalization

* [ ] Complete system integration
* [ ] Expand automated tests
* [ ] Fix remaining bugs
* [ ] Optimize application
* [ ] Final documentation
* [ ] Release version

---

# 📁 Development Principles

The project follows several principles:

* Keep systems modular.
* Separate interface and implementation where appropriate.
* Keep game logic independent from the GUI when possible.
* Use meaningful class and function names.
* Avoid unnecessary coupling between modules.
* Write tests for important system logic.
* Document major architectural decisions.
* Use Git branches for feature development.
* Keep generated build files out of version control.

---

# 📄 License

This project is developed for **educational and academic purposes**.

---

# 👥 Team

<table>
  <tr>
    <th>Nhóm</th>
    <th>Họ và tên</th>
    <th>MSSV</th>
    <th>Đề tài</th>
  </tr>

  <tr>
    <td rowspan="5" align="center">3</td>
    <td>Nguyễn Thành Đạt</td>
    <td>6651071013</td>
    <td rowspan="5" align="center">Nuôi pet ảo</td>
  </tr>

  <tr>
    <td>Nguyễn Ngọc Phương Lam</td>
    <td>6651071037</td>
  </tr>

  <tr>
    <td>Đinh Thị Thảo Duyên</td>
    <td>6651071009</td>
  </tr>

  <tr>
    <td>Hoàng Thị Mỹ Trang</td>
    <td>6651071079</td>
  </tr>

  <tr>
    <td>Nguyễn Thị Ngọc Đẹp</td>
    <td>6651071015</td>
  </tr>
</table>

<div align="center">

### 🐾 Take care. Play. Learn. Grow together.

**Pet Raising Project**

</div>
