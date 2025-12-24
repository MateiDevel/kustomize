# kustomize
- A handy tool for KDE Plasma users to switch from a rice to another 

# Current features
- Can import and export the global config
- Can export the entire config tree

# Under construction
- Bunch of features to be added (p.s. my first C project, might be crap)
- Refactor code cuz it sucks

# Setup
To use the tool , do the following :

## **Install Dependencies:**
- Debian based:
``` 
sudo apt install cmake build-essential
```
- Arch based:
```
 sudo pacman -S cmake base-devel
```
### **Or if you want to use Ninja (recomended):**
- Debian based:
``` 
sudo apt install cmake ninja-build
```
- Arch based:
```
 sudo pacman -S cmake ninja
```

## **Clone the repo:**
```
git clone https://github.com/MateiDevel/kustomize-backend 
cd kustomize-backend
```

## Generate build files
```
mkdir build
cd build
cmake -G Ninja ..
ninja
```

## Run
After all of that , just run using :
```
./kustomize-backend
```

**Done!**

