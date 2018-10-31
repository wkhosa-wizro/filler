# filler
### About Filler

---

# How To Build The Project
* Clone filler project [filler](https://github.com/wkhosa-wizro/filler.git)
* Change into filler directory ** cd filler **
* Run ** make fclean && make all **
* After running make (last command) executable file *filler* will be created
* 'filler' file is the player that will play against other players in reasources
* ***Note The Players in Resouces File are Mac-OS Only Executable, Unless Your on Mac-OS They Won't Run***
# How To Play The Game
* Ruby is required to play the game **The filler_vm is a ruby script**
* Assuming the project is run on filler directory
  * ./resources/filler_vm -p1 ./filler -p2 ./resources/players/{*choose any player*} -f resources/maps/{*choose any map*}
  * **example** ./resources/filler_vm -p1 ./filler -p2 ./resources/players/hcao.filler -f resources/maps/map00
  * wait until the results are returend 
