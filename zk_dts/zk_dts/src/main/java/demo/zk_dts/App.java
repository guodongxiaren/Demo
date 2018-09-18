package demo.zk_dts;

import java.util.List;

import org.apache.zookeeper.ZooKeeper;

 

public class App 
{
    public static void main( String[] args )
    {
      	ZooKeeper zk = null;
        
        try {
			zk = new ZooKeeper("127.0.0.1:2181", 500000, null);
		    List<String> ls = zk.getChildren("/home", new ChildChangeWatcher("/home", zk));
			for (String s:ls) {
				System.out.println(s);
			}

			Thread.sleep(50000);
			
        } catch (Exception e) {
			e.printStackTrace();
		} finally {
			if (zk != null) {
				try {
					zk.close();
				} catch (InterruptedException e) {
					e.printStackTrace();
				}
			}
		}
    }
}
