##
## Auto Generated makefile by CodeLite IDE
## any manual changes will be erased      
##
## Debug
ProjectName            :=JuegoAsteroides
ConfigurationName      :=Debug
WorkspacePath          := "/home/jose/Projects/JuegoAsteroides/juego-asteroides"
ProjectPath            := "/home/jose/Projects/JuegoAsteroides/juego-asteroides/JuegoAsteroides"
IntermediateDirectory  :=./Debug
OutDir                 := $(IntermediateDirectory)
CurrentFileName        :=
CurrentFilePath        :=
CurrentFileFullPath    :=
User                   :=Jose Silva Monard
Date                   :=24/01/16
CodeLitePath           :="/home/jose/.codelite"
LinkerName             :=g++
SharedObjectLinkerName :=g++ -shared -fPIC
ObjectSuffix           :=.o
DependSuffix           :=.o.d
PreprocessSuffix       :=.o.i
DebugSwitch            :=-gstab
IncludeSwitch          :=-I
LibrarySwitch          :=-l
OutputSwitch           :=-o 
LibraryPathSwitch      :=-L
PreprocessorSwitch     :=-D
SourceSwitch           :=-c 
OutputFile             :=$(IntermediateDirectory)/JuegoAsteroides
Preprocessors          :=
ObjectSwitch           :=-o 
ArchiveOutputSwitch    := 
PreprocessOnlySwitch   :=-E 
ObjectsFileList        :="JuegoAsteroides.txt"
PCHCompileFlags        :=
MakeDirCommand         :=mkdir -p
LinkOptions            :=  -fopenmp -fPIC
IncludePath            :=  $(IncludeSwitch). $(IncludeSwitch)./ $(IncludeSwitch)/usr/local/lib $(IncludeSwitch)/usr/local/include $(IncludeSwitch)/home/jose/Projects/SFML-2.3.2/include 
IncludePCH             := 
RcIncludePath          := 
Libs                   := $(LibrarySwitch)allegro $(LibrarySwitch)allegro_acodec $(LibrarySwitch)allegro_audio $(LibrarySwitch)allegro_color $(LibrarySwitch)allegro_dialog $(LibrarySwitch)allegro_font $(LibrarySwitch)allegro_image $(LibrarySwitch)allegro_memfile $(LibrarySwitch)allegro_physfs $(LibrarySwitch)allegro_primitives $(LibrarySwitch)allegro_ttf $(LibrarySwitch)allegro_main $(LibrarySwitch)sfml-graphics $(LibrarySwitch)sfml-window $(LibrarySwitch)sfml-system 
ArLibs                 :=  "liballegro" "liballegro_acodec" "liballegro_audio" "liballegro_color" "liballegro_dialog" "liballegro_font" "liballegro_image" "liballegro_memfile" "liballegro_physfs" "liballegro_primitives" "liballegro_ttf" "liballegro_main" "sfml-graphics" "sfml-window" "sfml-system" 
LibPath                := $(LibraryPathSwitch). $(LibraryPathSwitch)/usr/local/lib/ $(LibraryPathSwitch)/home/jose/Projects/SFML-2.3.2/lib/ 

##
## Common variables
## AR, CXX, CC, AS, CXXFLAGS and CFLAGS can be overriden using an environment variables
##
AR       := ar rcus
CXX      := g++
CC       := gcc
CXXFLAGS :=  -g -fopenmp -std=c++11 -fPIC $(Preprocessors)
CFLAGS   :=  -g -O0 -Wall $(Preprocessors)
ASFLAGS  := 
AS       := as


##
## User defined environment variables
##
CodeLiteDir:=/usr/share/codelite
Objects0=$(IntermediateDirectory)/src_main.cpp$(ObjectSuffix) $(IntermediateDirectory)/Actores_Asteroide.cpp$(ObjectSuffix) $(IntermediateDirectory)/Actores_NaveEspacial.cpp$(ObjectSuffix) $(IntermediateDirectory)/Actores_RayoLaser.cpp$(ObjectSuffix) $(IntermediateDirectory)/Actores_FabricaObjetoGrafica.cpp$(ObjectSuffix) $(IntermediateDirectory)/Base_JuegoAsteroides.cpp$(ObjectSuffix) $(IntermediateDirectory)/Base_CoreLib.cpp$(ObjectSuffix) $(IntermediateDirectory)/LibreriaJuego_GraficadorAllegro.cpp$(ObjectSuffix) $(IntermediateDirectory)/LibreriaJuego_PantallaAllegro.cpp$(ObjectSuffix) $(IntermediateDirectory)/LibreriaJuego_TipografiaAllegro.cpp$(ObjectSuffix) \
	$(IntermediateDirectory)/LibreriaJuego_EventosAllegro.cpp$(ObjectSuffix) $(IntermediateDirectory)/LibreriaJuegoSFML_GraficadorSFML.cpp$(ObjectSuffix) $(IntermediateDirectory)/LibreriaJuegoSFML_PantallaSFML.cpp$(ObjectSuffix) $(IntermediateDirectory)/LibreriaJuegoSFML_TipografiaSFML.cpp$(ObjectSuffix) $(IntermediateDirectory)/LibreriaJuegoSFML_EventosTecladoSFML.cpp$(ObjectSuffix) 



Objects=$(Objects0) 

##
## Main Build Targets 
##
.PHONY: all clean PreBuild PrePreBuild PostBuild MakeIntermediateDirs
all: $(OutputFile)

$(OutputFile): $(IntermediateDirectory)/.d $(Objects) 
	@$(MakeDirCommand) $(@D)
	@echo "" > $(IntermediateDirectory)/.d
	@echo $(Objects0)  > $(ObjectsFileList)
	$(LinkerName) $(OutputSwitch)$(OutputFile) @$(ObjectsFileList) $(LibPath) $(Libs) $(LinkOptions)

MakeIntermediateDirs:
	@test -d ./Debug || $(MakeDirCommand) ./Debug


$(IntermediateDirectory)/.d:
	@test -d ./Debug || $(MakeDirCommand) ./Debug

PreBuild:


##
## Objects
##
$(IntermediateDirectory)/src_main.cpp$(ObjectSuffix): src/main.cpp $(IntermediateDirectory)/src_main.cpp$(DependSuffix)
	$(CXX) $(IncludePCH) $(SourceSwitch) "/home/jose/Projects/JuegoAsteroides/juego-asteroides/JuegoAsteroides/src/main.cpp" $(CXXFLAGS) $(ObjectSwitch)$(IntermediateDirectory)/src_main.cpp$(ObjectSuffix) $(IncludePath)
$(IntermediateDirectory)/src_main.cpp$(DependSuffix): src/main.cpp
	@$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) -MG -MP -MT$(IntermediateDirectory)/src_main.cpp$(ObjectSuffix) -MF$(IntermediateDirectory)/src_main.cpp$(DependSuffix) -MM "src/main.cpp"

$(IntermediateDirectory)/src_main.cpp$(PreprocessSuffix): src/main.cpp
	$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) $(PreprocessOnlySwitch) $(OutputSwitch) $(IntermediateDirectory)/src_main.cpp$(PreprocessSuffix) "src/main.cpp"

$(IntermediateDirectory)/Actores_Asteroide.cpp$(ObjectSuffix): src/Actores/Asteroide.cpp $(IntermediateDirectory)/Actores_Asteroide.cpp$(DependSuffix)
	$(CXX) $(IncludePCH) $(SourceSwitch) "/home/jose/Projects/JuegoAsteroides/juego-asteroides/JuegoAsteroides/src/Actores/Asteroide.cpp" $(CXXFLAGS) $(ObjectSwitch)$(IntermediateDirectory)/Actores_Asteroide.cpp$(ObjectSuffix) $(IncludePath)
$(IntermediateDirectory)/Actores_Asteroide.cpp$(DependSuffix): src/Actores/Asteroide.cpp
	@$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) -MG -MP -MT$(IntermediateDirectory)/Actores_Asteroide.cpp$(ObjectSuffix) -MF$(IntermediateDirectory)/Actores_Asteroide.cpp$(DependSuffix) -MM "src/Actores/Asteroide.cpp"

$(IntermediateDirectory)/Actores_Asteroide.cpp$(PreprocessSuffix): src/Actores/Asteroide.cpp
	$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) $(PreprocessOnlySwitch) $(OutputSwitch) $(IntermediateDirectory)/Actores_Asteroide.cpp$(PreprocessSuffix) "src/Actores/Asteroide.cpp"

$(IntermediateDirectory)/Actores_NaveEspacial.cpp$(ObjectSuffix): src/Actores/NaveEspacial.cpp $(IntermediateDirectory)/Actores_NaveEspacial.cpp$(DependSuffix)
	$(CXX) $(IncludePCH) $(SourceSwitch) "/home/jose/Projects/JuegoAsteroides/juego-asteroides/JuegoAsteroides/src/Actores/NaveEspacial.cpp" $(CXXFLAGS) $(ObjectSwitch)$(IntermediateDirectory)/Actores_NaveEspacial.cpp$(ObjectSuffix) $(IncludePath)
$(IntermediateDirectory)/Actores_NaveEspacial.cpp$(DependSuffix): src/Actores/NaveEspacial.cpp
	@$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) -MG -MP -MT$(IntermediateDirectory)/Actores_NaveEspacial.cpp$(ObjectSuffix) -MF$(IntermediateDirectory)/Actores_NaveEspacial.cpp$(DependSuffix) -MM "src/Actores/NaveEspacial.cpp"

$(IntermediateDirectory)/Actores_NaveEspacial.cpp$(PreprocessSuffix): src/Actores/NaveEspacial.cpp
	$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) $(PreprocessOnlySwitch) $(OutputSwitch) $(IntermediateDirectory)/Actores_NaveEspacial.cpp$(PreprocessSuffix) "src/Actores/NaveEspacial.cpp"

$(IntermediateDirectory)/Actores_RayoLaser.cpp$(ObjectSuffix): src/Actores/RayoLaser.cpp $(IntermediateDirectory)/Actores_RayoLaser.cpp$(DependSuffix)
	$(CXX) $(IncludePCH) $(SourceSwitch) "/home/jose/Projects/JuegoAsteroides/juego-asteroides/JuegoAsteroides/src/Actores/RayoLaser.cpp" $(CXXFLAGS) $(ObjectSwitch)$(IntermediateDirectory)/Actores_RayoLaser.cpp$(ObjectSuffix) $(IncludePath)
$(IntermediateDirectory)/Actores_RayoLaser.cpp$(DependSuffix): src/Actores/RayoLaser.cpp
	@$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) -MG -MP -MT$(IntermediateDirectory)/Actores_RayoLaser.cpp$(ObjectSuffix) -MF$(IntermediateDirectory)/Actores_RayoLaser.cpp$(DependSuffix) -MM "src/Actores/RayoLaser.cpp"

$(IntermediateDirectory)/Actores_RayoLaser.cpp$(PreprocessSuffix): src/Actores/RayoLaser.cpp
	$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) $(PreprocessOnlySwitch) $(OutputSwitch) $(IntermediateDirectory)/Actores_RayoLaser.cpp$(PreprocessSuffix) "src/Actores/RayoLaser.cpp"

$(IntermediateDirectory)/Actores_FabricaObjetoGrafica.cpp$(ObjectSuffix): src/Actores/FabricaObjetoGrafica.cpp $(IntermediateDirectory)/Actores_FabricaObjetoGrafica.cpp$(DependSuffix)
	$(CXX) $(IncludePCH) $(SourceSwitch) "/home/jose/Projects/JuegoAsteroides/juego-asteroides/JuegoAsteroides/src/Actores/FabricaObjetoGrafica.cpp" $(CXXFLAGS) $(ObjectSwitch)$(IntermediateDirectory)/Actores_FabricaObjetoGrafica.cpp$(ObjectSuffix) $(IncludePath)
$(IntermediateDirectory)/Actores_FabricaObjetoGrafica.cpp$(DependSuffix): src/Actores/FabricaObjetoGrafica.cpp
	@$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) -MG -MP -MT$(IntermediateDirectory)/Actores_FabricaObjetoGrafica.cpp$(ObjectSuffix) -MF$(IntermediateDirectory)/Actores_FabricaObjetoGrafica.cpp$(DependSuffix) -MM "src/Actores/FabricaObjetoGrafica.cpp"

$(IntermediateDirectory)/Actores_FabricaObjetoGrafica.cpp$(PreprocessSuffix): src/Actores/FabricaObjetoGrafica.cpp
	$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) $(PreprocessOnlySwitch) $(OutputSwitch) $(IntermediateDirectory)/Actores_FabricaObjetoGrafica.cpp$(PreprocessSuffix) "src/Actores/FabricaObjetoGrafica.cpp"

$(IntermediateDirectory)/Base_JuegoAsteroides.cpp$(ObjectSuffix): src/Base/JuegoAsteroides.cpp $(IntermediateDirectory)/Base_JuegoAsteroides.cpp$(DependSuffix)
	$(CXX) $(IncludePCH) $(SourceSwitch) "/home/jose/Projects/JuegoAsteroides/juego-asteroides/JuegoAsteroides/src/Base/JuegoAsteroides.cpp" $(CXXFLAGS) $(ObjectSwitch)$(IntermediateDirectory)/Base_JuegoAsteroides.cpp$(ObjectSuffix) $(IncludePath)
$(IntermediateDirectory)/Base_JuegoAsteroides.cpp$(DependSuffix): src/Base/JuegoAsteroides.cpp
	@$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) -MG -MP -MT$(IntermediateDirectory)/Base_JuegoAsteroides.cpp$(ObjectSuffix) -MF$(IntermediateDirectory)/Base_JuegoAsteroides.cpp$(DependSuffix) -MM "src/Base/JuegoAsteroides.cpp"

$(IntermediateDirectory)/Base_JuegoAsteroides.cpp$(PreprocessSuffix): src/Base/JuegoAsteroides.cpp
	$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) $(PreprocessOnlySwitch) $(OutputSwitch) $(IntermediateDirectory)/Base_JuegoAsteroides.cpp$(PreprocessSuffix) "src/Base/JuegoAsteroides.cpp"

$(IntermediateDirectory)/Base_CoreLib.cpp$(ObjectSuffix): src/Base/CoreLib.cpp $(IntermediateDirectory)/Base_CoreLib.cpp$(DependSuffix)
	$(CXX) $(IncludePCH) $(SourceSwitch) "/home/jose/Projects/JuegoAsteroides/juego-asteroides/JuegoAsteroides/src/Base/CoreLib.cpp" $(CXXFLAGS) $(ObjectSwitch)$(IntermediateDirectory)/Base_CoreLib.cpp$(ObjectSuffix) $(IncludePath)
$(IntermediateDirectory)/Base_CoreLib.cpp$(DependSuffix): src/Base/CoreLib.cpp
	@$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) -MG -MP -MT$(IntermediateDirectory)/Base_CoreLib.cpp$(ObjectSuffix) -MF$(IntermediateDirectory)/Base_CoreLib.cpp$(DependSuffix) -MM "src/Base/CoreLib.cpp"

$(IntermediateDirectory)/Base_CoreLib.cpp$(PreprocessSuffix): src/Base/CoreLib.cpp
	$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) $(PreprocessOnlySwitch) $(OutputSwitch) $(IntermediateDirectory)/Base_CoreLib.cpp$(PreprocessSuffix) "src/Base/CoreLib.cpp"

$(IntermediateDirectory)/LibreriaJuego_GraficadorAllegro.cpp$(ObjectSuffix): src/LibreriaJuego/GraficadorAllegro.cpp $(IntermediateDirectory)/LibreriaJuego_GraficadorAllegro.cpp$(DependSuffix)
	$(CXX) $(IncludePCH) $(SourceSwitch) "/home/jose/Projects/JuegoAsteroides/juego-asteroides/JuegoAsteroides/src/LibreriaJuego/GraficadorAllegro.cpp" $(CXXFLAGS) $(ObjectSwitch)$(IntermediateDirectory)/LibreriaJuego_GraficadorAllegro.cpp$(ObjectSuffix) $(IncludePath)
$(IntermediateDirectory)/LibreriaJuego_GraficadorAllegro.cpp$(DependSuffix): src/LibreriaJuego/GraficadorAllegro.cpp
	@$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) -MG -MP -MT$(IntermediateDirectory)/LibreriaJuego_GraficadorAllegro.cpp$(ObjectSuffix) -MF$(IntermediateDirectory)/LibreriaJuego_GraficadorAllegro.cpp$(DependSuffix) -MM "src/LibreriaJuego/GraficadorAllegro.cpp"

$(IntermediateDirectory)/LibreriaJuego_GraficadorAllegro.cpp$(PreprocessSuffix): src/LibreriaJuego/GraficadorAllegro.cpp
	$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) $(PreprocessOnlySwitch) $(OutputSwitch) $(IntermediateDirectory)/LibreriaJuego_GraficadorAllegro.cpp$(PreprocessSuffix) "src/LibreriaJuego/GraficadorAllegro.cpp"

$(IntermediateDirectory)/LibreriaJuego_PantallaAllegro.cpp$(ObjectSuffix): src/LibreriaJuego/PantallaAllegro.cpp $(IntermediateDirectory)/LibreriaJuego_PantallaAllegro.cpp$(DependSuffix)
	$(CXX) $(IncludePCH) $(SourceSwitch) "/home/jose/Projects/JuegoAsteroides/juego-asteroides/JuegoAsteroides/src/LibreriaJuego/PantallaAllegro.cpp" $(CXXFLAGS) $(ObjectSwitch)$(IntermediateDirectory)/LibreriaJuego_PantallaAllegro.cpp$(ObjectSuffix) $(IncludePath)
$(IntermediateDirectory)/LibreriaJuego_PantallaAllegro.cpp$(DependSuffix): src/LibreriaJuego/PantallaAllegro.cpp
	@$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) -MG -MP -MT$(IntermediateDirectory)/LibreriaJuego_PantallaAllegro.cpp$(ObjectSuffix) -MF$(IntermediateDirectory)/LibreriaJuego_PantallaAllegro.cpp$(DependSuffix) -MM "src/LibreriaJuego/PantallaAllegro.cpp"

$(IntermediateDirectory)/LibreriaJuego_PantallaAllegro.cpp$(PreprocessSuffix): src/LibreriaJuego/PantallaAllegro.cpp
	$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) $(PreprocessOnlySwitch) $(OutputSwitch) $(IntermediateDirectory)/LibreriaJuego_PantallaAllegro.cpp$(PreprocessSuffix) "src/LibreriaJuego/PantallaAllegro.cpp"

$(IntermediateDirectory)/LibreriaJuego_TipografiaAllegro.cpp$(ObjectSuffix): src/LibreriaJuego/TipografiaAllegro.cpp $(IntermediateDirectory)/LibreriaJuego_TipografiaAllegro.cpp$(DependSuffix)
	$(CXX) $(IncludePCH) $(SourceSwitch) "/home/jose/Projects/JuegoAsteroides/juego-asteroides/JuegoAsteroides/src/LibreriaJuego/TipografiaAllegro.cpp" $(CXXFLAGS) $(ObjectSwitch)$(IntermediateDirectory)/LibreriaJuego_TipografiaAllegro.cpp$(ObjectSuffix) $(IncludePath)
$(IntermediateDirectory)/LibreriaJuego_TipografiaAllegro.cpp$(DependSuffix): src/LibreriaJuego/TipografiaAllegro.cpp
	@$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) -MG -MP -MT$(IntermediateDirectory)/LibreriaJuego_TipografiaAllegro.cpp$(ObjectSuffix) -MF$(IntermediateDirectory)/LibreriaJuego_TipografiaAllegro.cpp$(DependSuffix) -MM "src/LibreriaJuego/TipografiaAllegro.cpp"

$(IntermediateDirectory)/LibreriaJuego_TipografiaAllegro.cpp$(PreprocessSuffix): src/LibreriaJuego/TipografiaAllegro.cpp
	$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) $(PreprocessOnlySwitch) $(OutputSwitch) $(IntermediateDirectory)/LibreriaJuego_TipografiaAllegro.cpp$(PreprocessSuffix) "src/LibreriaJuego/TipografiaAllegro.cpp"

$(IntermediateDirectory)/LibreriaJuego_EventosAllegro.cpp$(ObjectSuffix): src/LibreriaJuego/EventosAllegro.cpp $(IntermediateDirectory)/LibreriaJuego_EventosAllegro.cpp$(DependSuffix)
	$(CXX) $(IncludePCH) $(SourceSwitch) "/home/jose/Projects/JuegoAsteroides/juego-asteroides/JuegoAsteroides/src/LibreriaJuego/EventosAllegro.cpp" $(CXXFLAGS) $(ObjectSwitch)$(IntermediateDirectory)/LibreriaJuego_EventosAllegro.cpp$(ObjectSuffix) $(IncludePath)
$(IntermediateDirectory)/LibreriaJuego_EventosAllegro.cpp$(DependSuffix): src/LibreriaJuego/EventosAllegro.cpp
	@$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) -MG -MP -MT$(IntermediateDirectory)/LibreriaJuego_EventosAllegro.cpp$(ObjectSuffix) -MF$(IntermediateDirectory)/LibreriaJuego_EventosAllegro.cpp$(DependSuffix) -MM "src/LibreriaJuego/EventosAllegro.cpp"

$(IntermediateDirectory)/LibreriaJuego_EventosAllegro.cpp$(PreprocessSuffix): src/LibreriaJuego/EventosAllegro.cpp
	$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) $(PreprocessOnlySwitch) $(OutputSwitch) $(IntermediateDirectory)/LibreriaJuego_EventosAllegro.cpp$(PreprocessSuffix) "src/LibreriaJuego/EventosAllegro.cpp"

$(IntermediateDirectory)/LibreriaJuegoSFML_GraficadorSFML.cpp$(ObjectSuffix): src/LibreriaJuegoSFML/GraficadorSFML.cpp $(IntermediateDirectory)/LibreriaJuegoSFML_GraficadorSFML.cpp$(DependSuffix)
	$(CXX) $(IncludePCH) $(SourceSwitch) "/home/jose/Projects/JuegoAsteroides/juego-asteroides/JuegoAsteroides/src/LibreriaJuegoSFML/GraficadorSFML.cpp" $(CXXFLAGS) $(ObjectSwitch)$(IntermediateDirectory)/LibreriaJuegoSFML_GraficadorSFML.cpp$(ObjectSuffix) $(IncludePath)
$(IntermediateDirectory)/LibreriaJuegoSFML_GraficadorSFML.cpp$(DependSuffix): src/LibreriaJuegoSFML/GraficadorSFML.cpp
	@$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) -MG -MP -MT$(IntermediateDirectory)/LibreriaJuegoSFML_GraficadorSFML.cpp$(ObjectSuffix) -MF$(IntermediateDirectory)/LibreriaJuegoSFML_GraficadorSFML.cpp$(DependSuffix) -MM "src/LibreriaJuegoSFML/GraficadorSFML.cpp"

$(IntermediateDirectory)/LibreriaJuegoSFML_GraficadorSFML.cpp$(PreprocessSuffix): src/LibreriaJuegoSFML/GraficadorSFML.cpp
	$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) $(PreprocessOnlySwitch) $(OutputSwitch) $(IntermediateDirectory)/LibreriaJuegoSFML_GraficadorSFML.cpp$(PreprocessSuffix) "src/LibreriaJuegoSFML/GraficadorSFML.cpp"

$(IntermediateDirectory)/LibreriaJuegoSFML_PantallaSFML.cpp$(ObjectSuffix): src/LibreriaJuegoSFML/PantallaSFML.cpp $(IntermediateDirectory)/LibreriaJuegoSFML_PantallaSFML.cpp$(DependSuffix)
	$(CXX) $(IncludePCH) $(SourceSwitch) "/home/jose/Projects/JuegoAsteroides/juego-asteroides/JuegoAsteroides/src/LibreriaJuegoSFML/PantallaSFML.cpp" $(CXXFLAGS) $(ObjectSwitch)$(IntermediateDirectory)/LibreriaJuegoSFML_PantallaSFML.cpp$(ObjectSuffix) $(IncludePath)
$(IntermediateDirectory)/LibreriaJuegoSFML_PantallaSFML.cpp$(DependSuffix): src/LibreriaJuegoSFML/PantallaSFML.cpp
	@$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) -MG -MP -MT$(IntermediateDirectory)/LibreriaJuegoSFML_PantallaSFML.cpp$(ObjectSuffix) -MF$(IntermediateDirectory)/LibreriaJuegoSFML_PantallaSFML.cpp$(DependSuffix) -MM "src/LibreriaJuegoSFML/PantallaSFML.cpp"

$(IntermediateDirectory)/LibreriaJuegoSFML_PantallaSFML.cpp$(PreprocessSuffix): src/LibreriaJuegoSFML/PantallaSFML.cpp
	$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) $(PreprocessOnlySwitch) $(OutputSwitch) $(IntermediateDirectory)/LibreriaJuegoSFML_PantallaSFML.cpp$(PreprocessSuffix) "src/LibreriaJuegoSFML/PantallaSFML.cpp"

$(IntermediateDirectory)/LibreriaJuegoSFML_TipografiaSFML.cpp$(ObjectSuffix): src/LibreriaJuegoSFML/TipografiaSFML.cpp $(IntermediateDirectory)/LibreriaJuegoSFML_TipografiaSFML.cpp$(DependSuffix)
	$(CXX) $(IncludePCH) $(SourceSwitch) "/home/jose/Projects/JuegoAsteroides/juego-asteroides/JuegoAsteroides/src/LibreriaJuegoSFML/TipografiaSFML.cpp" $(CXXFLAGS) $(ObjectSwitch)$(IntermediateDirectory)/LibreriaJuegoSFML_TipografiaSFML.cpp$(ObjectSuffix) $(IncludePath)
$(IntermediateDirectory)/LibreriaJuegoSFML_TipografiaSFML.cpp$(DependSuffix): src/LibreriaJuegoSFML/TipografiaSFML.cpp
	@$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) -MG -MP -MT$(IntermediateDirectory)/LibreriaJuegoSFML_TipografiaSFML.cpp$(ObjectSuffix) -MF$(IntermediateDirectory)/LibreriaJuegoSFML_TipografiaSFML.cpp$(DependSuffix) -MM "src/LibreriaJuegoSFML/TipografiaSFML.cpp"

$(IntermediateDirectory)/LibreriaJuegoSFML_TipografiaSFML.cpp$(PreprocessSuffix): src/LibreriaJuegoSFML/TipografiaSFML.cpp
	$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) $(PreprocessOnlySwitch) $(OutputSwitch) $(IntermediateDirectory)/LibreriaJuegoSFML_TipografiaSFML.cpp$(PreprocessSuffix) "src/LibreriaJuegoSFML/TipografiaSFML.cpp"

$(IntermediateDirectory)/LibreriaJuegoSFML_EventosTecladoSFML.cpp$(ObjectSuffix): src/LibreriaJuegoSFML/EventosTecladoSFML.cpp $(IntermediateDirectory)/LibreriaJuegoSFML_EventosTecladoSFML.cpp$(DependSuffix)
	$(CXX) $(IncludePCH) $(SourceSwitch) "/home/jose/Projects/JuegoAsteroides/juego-asteroides/JuegoAsteroides/src/LibreriaJuegoSFML/EventosTecladoSFML.cpp" $(CXXFLAGS) $(ObjectSwitch)$(IntermediateDirectory)/LibreriaJuegoSFML_EventosTecladoSFML.cpp$(ObjectSuffix) $(IncludePath)
$(IntermediateDirectory)/LibreriaJuegoSFML_EventosTecladoSFML.cpp$(DependSuffix): src/LibreriaJuegoSFML/EventosTecladoSFML.cpp
	@$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) -MG -MP -MT$(IntermediateDirectory)/LibreriaJuegoSFML_EventosTecladoSFML.cpp$(ObjectSuffix) -MF$(IntermediateDirectory)/LibreriaJuegoSFML_EventosTecladoSFML.cpp$(DependSuffix) -MM "src/LibreriaJuegoSFML/EventosTecladoSFML.cpp"

$(IntermediateDirectory)/LibreriaJuegoSFML_EventosTecladoSFML.cpp$(PreprocessSuffix): src/LibreriaJuegoSFML/EventosTecladoSFML.cpp
	$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) $(PreprocessOnlySwitch) $(OutputSwitch) $(IntermediateDirectory)/LibreriaJuegoSFML_EventosTecladoSFML.cpp$(PreprocessSuffix) "src/LibreriaJuegoSFML/EventosTecladoSFML.cpp"


-include $(IntermediateDirectory)/*$(DependSuffix)
##
## Clean
##
clean:
	$(RM) -r ./Debug/


