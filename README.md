# FDM Tool 

## 任务

计算机辅助设计（Computer Aided Design—CAD）有着极其广泛的内容。仅
就光电成像器件电子光学系统的 CAD 而言，也远不止上述有关内容。电子光学
系统中电磁场的计算，除了采用上述有限差分法（Finite Differential Method—
FDM），还有一系列有效的算法，例有限元法（Finite Element Method—FEM）、电荷模拟法（Charge Simulation Method—CSM）、边界积分方程法（Boundary 
Integral Equation Method—BIEM）和边界元素法（Boundary Element Method—
BEM）等。这些方法都已相当完善和成熟，有不少算法及方程可直接利用。当
然不同情况下各算法的效率与效果（使用复杂程度、数据准备、网格或边界划分
难易及其自动化程度、计算速度、计算精度等）可能会各不相同，要根据具体情
况选用不同的方法。 



## 功能
* 根据所给电场参数计算电场分布函数
* 可视化SOR迭代过程
* 通过拉格朗日插值法获取电场轴上电场分布函数
* 验证静电场叠加定理

## 使用介绍
![软件界面](\Repository\img\UI.jpg)

### 软件目录结构
- Tool directory
	- data.dat
- Output directory
	- Output.res  

data.dat 文件包含所有的输入参数

`0.5;delta 间隔`
`10;n 电极数目`
`8.5,6.5,8.0,13.5,13.0,5.5,5.5,10.0,12.0,8.5; zi z方向间隔`
`13,10,12,21,20,8,8,16,19,13; Ni 划分格数`
`16,9,40,25,34,10,66,47,91,100; Vi 电压`
`34; delta_r1 R1`
`22; delta_r2 R2`
`66; M1` 
`44; M2`
`0.000002; epsilon 精度控制`
`3; NST 间隔`
`43; INS  精度`
`1;`
`5; delta_V 划分电压差 (1代表间隔电压， 2代表 给定电压)`

![可视化](\img\visual.gif)
