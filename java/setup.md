1. install [jdk](https://www.oracle.com/technetwork/java/javase/downloads/index.html)

2. 配置JAVA_HOME环境变量（就是jdk目录），在PATH中添加%JAVA_HOME%\bin（注意在jdk12之后不再有jre文件夹），如果需要jre文件夹：

   ```java
   bin\jlink.exe --module-path jmods --add-modules java.desktop --output jre
   ```

   

3. HelloWorld 程序测试（注意这里文件名要和类名一致）

   ```java
   public class HelloWorld {
       public static void main(String[] args) {
           System.out.println("Hello world!");
       }
   }
   ```

   4.javac HelloWorld.java（可看到编译好的.class文件）

   为什么要编译？

   > + check type errors 与 syntax errors
   > + 可帮助解释器加速

   5.装[eclipse](https://www.eclipse.org/downloads/packages/)方便开发

   安装完成后，运行eclipse可能会遇到问题：

   > An error has occurred.See the log file

   解决方法：

   > 删除eclipse\configuration 目录下的 org.eclipse.osgi org.eclipse.update 两个子目录，重新启动 eclipse；

   eclipse 装好后新建项目，新建class文件，注意勾选main方法，然后测试hello world程序，成功执行则安装成功了

   eclipse 运行快捷键:

   > ctrl+F11

