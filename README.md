# 🏠 Smart Home Automation Simulation

> **A modular C++ simulation of a real-world Smart Home system — designed to master and demonstrate all major software design patterns.**

---

## 🚀 Project Overview

The **SmartHomeSim** simulates a connected home where devices such as lights, thermostats, and motion sensors communicate through a central hub.  
It is entirely software-based — every device, event, and interaction is simulated with C++ classes and console outputs.


---

## 🚀 Key Features
- 🧱 **Pattern-Driven Architecture:** 20+ classical design patterns applied thoughtfully.
- 💡 **Virtual Devices:** Lights, Thermostats, Door Locks, Sensors — fully simulated in C++.
- 🧠 **Automation Engine:** Build rules like “Turn on the light when temperature < 20°C”.
- 🔔 **Event System:** Devices notify observers in real time.
- ⏰ **Scheduler:** Run commands immediately or by time interval.
- 💾 **Persistence Layer:** Save configs and automation history with SQLite.
- ⚙️ **Plugin System:** Add new device types and protocols dynamically.
- 🌐 **REST & CLI Interfaces:** Control your smart home through a web API or console.
- 🧪 **Extensive Testing:** Unit and integration tests for patterns and logic.

---

## 🧩 Architecture Overview
```text

smart-home/
├── core/ # Domain models: Device, Light, Thermostat, DoorLock...
├── factory/ # Factories & Builders for device creation
├── comm/ # Communication layer (Bridge, Adapter)
├── engine/ # Automation engine, Observer, Command, Scheduler
├── persistence/ # Repository, Unit of Work, Memento
├── api/ # Facade, Proxy, REST API
├── plugins/ # 3rd-party adapters and plugin loader
├── ui/ # CLI interface
└── tests/ # Unit and integration tests
```

Each module corresponds to a clear architectural concern and demonstrates specific design patterns.

---

## 🧠 Design Patterns Implemented

| Category | Pattern | Example Usage |
|-----------|----------|---------------|
| **Creational** | Singleton | `Hub` instance managing all devices |
|  | Factory Method | `DeviceFactory` creating devices |
|  | Abstract Factory | `WifiDeviceFactory`, `ZigbeeDeviceFactory` |
|  | Builder | `AutomationRuleBuilder` building automation logic |
|  | Prototype | Device cloning (`Device::clone()`) |
| **Structural** | Composite | `DeviceGroup` controlling multiple devices |
|  | Adapter | `ThirdPartySDKAdapter` wrapping vendor SDKs |
|  | Bridge | `Device` ↔ `ICommProtocol` decoupling |
|  | Decorator | `EnergyMonitoringDecorator` adding features dynamically |
|  | Proxy | `SecureDeviceProxy` enforcing access control |
|  | Facade | `HomeFacade` exposing simplified API |
|  | Flyweight | `DeviceMetadataFactory` caching common data |
| **Behavioral** | Observer | Event system (Hub ↔ Observers) |
|  | Command | `TurnOnCommand`, `SetTemperatureCommand`, etc. |
|  | Strategy | Multiple scheduling algorithms |
|  | Chain of Responsibility | Message processing pipeline |
|  | State | `DoorLock` state transitions (Locked, Unlocked, Jammed) |
|  | Mediator | `AutomationMediator` coordinating engine and devices |
|  | Memento | Device state snapshots for rollback |
|  | Template Method | Shared workflow in device operations |
|  | Visitor | `FirmwareUpdateVisitor` traversing devices |
|  | Iterator | Iteration over `DeviceGroup` children |

---

## 🧰 Tech Stack
| Component | Technology |
|------------|-------------|
| **Language** | C++17 |
| **Build System** | CMake |
| **Database** | SQLite |
| **Testing** | GoogleTest |
| **Logging** | spdlog / std::cout |
| **API (optional)** | Crow or Pistache |
| **Threading** | `std::thread` for scheduling and simulation |

---

## 🧪 Getting Started

### 🔧 Build
```bash
git clone https://github.com/iamtrusters/SmartHomeSim-CPP.git
cd SmartHomeSim-CPP
cmake -S . -B build
cmake --build build
```
### ▶️ Run the simulation
```bash
./bin/smart_home.exe
```
### 💬 Example output
```text
[INFO] Device Registered: Light#LivingRoom
[INFO] Temperature Sensor Reading: 19.8°C
[ACTION] Rule Triggered: Turn on LivingRoom Light
[INFO] Light#LivingRoom -> ON
```

## 💬 Contact

👤 **Author:** Long Pham  <br>
💼**LinkedIn:** https://www.linkedin.com/in/phamvanlong <br>
📧**Email:** longkute169@gmail.com  

---

⭐ *If you like this project, please give it a star!*  
Your support motivates further open-source development.



