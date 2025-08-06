# 🚗 AeroDrive Simulator

### 👀 Overview
***Real-time aerodynamic visualization and car physics for enthusiasts.***

AeroDrive Simulator is a **C++/Unreal Engine** desktop application that lets users upload custom 3D car models and explore their aerodynamic behavior in a **fully interactive** environment. Featuring <span style="color:orange;"><strong>Garage Mode</strong></span>, <span style="color:deepskyblue;"><strong>Wind Tunnel Mode</strong></span>, and <span style="color:limegreen;"><strong>Track Mode</strong></span>; the simulator combines realistic physics with real-time flow visualization for a fun and educational experience.

</br>

---

### 📅 Timeline Summary

***This project is split up into multiple phases over the course of 12 months. As we go along the following phases, the section titled "[🚧 Construction](Construction)" will be updated.***

| Phase                     | Timeline        | Key Focus                                  |
|---------------------------|-----------------|--------------------------------------------|
| Phase 1: MVP              | Sept–Dec 2025   | Import 3D models, basic UI, Garage mode    |
| Phase 2: Wind Tunnel      | Jan–Apr 2026    | Aero visualizations, dynamic sliders       |
| Phase 3: Track Mode       | May–July 2026   | Driving + aero-integrated physics          |
| Phase 4: Polish           | Aug–Sept 2026   | UI, performance, exports, final build      |

</br>

---

### 🚧 Construction

**Goal:** Get the core system running with one usable feature mode (Garage or Wind Tunnel).

### ✅ Deliverables:
- ✅ Choose **Unreal Engine** + C++ setup
- ✅ Import and render **custom 3D car models (STL/OBJ/FBX)**
- ✅ Basic **Garage Mode**
  - View and rotate the car model
  - Simple metadata: name, dimensions, estimated drag coefficient (static)
- ✅ Core UI framework: menus, car importer, settings
- ✅ Hook up placeholder aerodynamic calculator (e.g., drag = ½ρv²CdA)
- ✅ Plan architecture for real-time visual FX (streamlines, smoke, forces)

### Tools to Learn/Use:
- Unreal Engine 5 with C++
- Assimp (for format compatibility)
