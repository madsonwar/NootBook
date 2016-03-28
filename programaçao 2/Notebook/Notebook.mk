##
## Auto Generated makefile by CodeLite IDE
## any manual changes will be erased      
##
## Debug
ProjectName            :=Notebook
ConfigurationName      :=Debug
WorkspacePath          := "C:\Users\FACOMP\Documents\programaçao 2"
ProjectPath            := "C:\Users\FACOMP\Documents\programaçao 2\Notebook"
IntermediateDirectory  :=./Debug
OutDir                 := $(IntermediateDirectory)
CurrentFileName        :=
CurrentFilePath        :=
CurrentFileFullPath    :=
User                   :=FACOMP
Date                   :=28/03/2016
CodeLitePath           :="C:\Program Files\CodeLite"
LinkerName             :=C:/cygwin64/bin/x86_64-pc-cygwin-g++.exe
SharedObjectLinkerName :=C:/cygwin64/bin/x86_64-pc-cygwin-g++.exe -shared -fPIC
ObjectSuffix           :=.o
DependSuffix           :=.o.d
PreprocessSuffix       :=.i
DebugSwitch            :=-g 
IncludeSwitch          :=-I
LibrarySwitch          :=-l
OutputSwitch           :=-o 
LibraryPathSwitch      :=-L
PreprocessorSwitch     :=-D
SourceSwitch           :=-c 
OutputFile             :=$(IntermediateDirectory)/$(ProjectName)
Preprocessors          :=
ObjectSwitch           :=-o 
ArchiveOutputSwitch    := 
PreprocessOnlySwitch   :=-E
ObjectsFileList        :="Notebook.txt"
PCHCompileFlags        :=
MakeDirCommand         :=makedir
RcCmpOptions           := 
RcCompilerName         :=windres
LinkOptions            :=  
IncludePath            :=  $(IncludeSwitch). $(IncludeSwitch). 
IncludePCH             := 
RcIncludePath          := 
Libs                   := 
ArLibs                 :=  
LibPath                := $(LibraryPathSwitch). 

##
## Common variables
## AR, CXX, CC, AS, CXXFLAGS and CFLAGS can be overriden using an environment variables
##
AR       := C:/cygwin64/bin/x86_64-pc-cygwin-ar.exe rcu
CXX      := C:/cygwin64/bin/x86_64-pc-cygwin-g++.exe
CC       := C:/cygwin64/bin/x86_64-pc-cygwin-gcc.exe
CXXFLAGS :=  -g -O0 -Wall $(Preprocessors)
CFLAGS   :=  -g -O0 -Wall $(Preprocessors)
ASFLAGS  := 
AS       := C:/cygwin64/bin/x86_64-pc-cygwin-as.exe


##
## User defined environment variables
##
CodeLiteDir:=C:\Program Files\CodeLite
Objects0=$(IntermediateDirectory)/main.cpp$(ObjectSuffix) $(IntermediateDirectory)/Device.cpp$(ObjectSuffix) $(IntermediateDirectory)/Computador.cpp$(ObjectSuffix) 



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
	@$(MakeDirCommand) "./Debug"


$(IntermediateDirectory)/.d:
	@$(MakeDirCommand) "./Debug"

PreBuild:


##
## Objects
##
$(IntermediateDirectory)/main.cpp$(ObjectSuffix): main.cpp $(IntermediateDirectory)/main.cpp$(DependSuffix)
	$(CXX) $(IncludePCH) $(SourceSwitch) "C:/Users/FACOMP/Documents/programaçao 2/Notebook/main.cpp" $(CXXFLAGS) $(ObjectSwitch)$(IntermediateDirectory)/main.cpp$(ObjectSuffix) $(IncludePath)
$(IntermediateDirectory)/main.cpp$(DependSuffix): main.cpp
	@$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) -MG -MP -MT$(IntermediateDirectory)/main.cpp$(ObjectSuffix) -MF$(IntermediateDirectory)/main.cpp$(DependSuffix) -MM "main.cpp"

$(IntermediateDirectory)/main.cpp$(PreprocessSuffix): main.cpp
	$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) $(PreprocessOnlySwitch) $(OutputSwitch) $(IntermediateDirectory)/main.cpp$(PreprocessSuffix) "main.cpp"

$(IntermediateDirectory)/Device.cpp$(ObjectSuffix): Device.cpp $(IntermediateDirectory)/Device.cpp$(DependSuffix)
	$(CXX) $(IncludePCH) $(SourceSwitch) "C:/Users/FACOMP/Documents/programaçao 2/Notebook/Device.cpp" $(CXXFLAGS) $(ObjectSwitch)$(IntermediateDirectory)/Device.cpp$(ObjectSuffix) $(IncludePath)
$(IntermediateDirectory)/Device.cpp$(DependSuffix): Device.cpp
	@$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) -MG -MP -MT$(IntermediateDirectory)/Device.cpp$(ObjectSuffix) -MF$(IntermediateDirectory)/Device.cpp$(DependSuffix) -MM "Device.cpp"

$(IntermediateDirectory)/Device.cpp$(PreprocessSuffix): Device.cpp
	$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) $(PreprocessOnlySwitch) $(OutputSwitch) $(IntermediateDirectory)/Device.cpp$(PreprocessSuffix) "Device.cpp"

$(IntermediateDirectory)/Computador.cpp$(ObjectSuffix): Computador.cpp $(IntermediateDirectory)/Computador.cpp$(DependSuffix)
	$(CXX) $(IncludePCH) $(SourceSwitch) "C:/Users/FACOMP/Documents/programaçao 2/Notebook/Computador.cpp" $(CXXFLAGS) $(ObjectSwitch)$(IntermediateDirectory)/Computador.cpp$(ObjectSuffix) $(IncludePath)
$(IntermediateDirectory)/Computador.cpp$(DependSuffix): Computador.cpp
	@$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) -MG -MP -MT$(IntermediateDirectory)/Computador.cpp$(ObjectSuffix) -MF$(IntermediateDirectory)/Computador.cpp$(DependSuffix) -MM "Computador.cpp"

$(IntermediateDirectory)/Computador.cpp$(PreprocessSuffix): Computador.cpp
	$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) $(PreprocessOnlySwitch) $(OutputSwitch) $(IntermediateDirectory)/Computador.cpp$(PreprocessSuffix) "Computador.cpp"


-include $(IntermediateDirectory)/*$(DependSuffix)
##
## Clean
##
clean:
	$(RM) -r ./Debug/


