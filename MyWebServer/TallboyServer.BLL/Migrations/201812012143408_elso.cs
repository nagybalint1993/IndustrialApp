namespace IndustrialAppServer.BLL.Migrations
{
    using System;
    using System.Data.Entity.Migrations;
    
    public partial class elso : DbMigration
    {
        public override void Up()
        {
            AlterColumn("dbo.TaskInstances", "UserId", c => c.String());
        }
        
        public override void Down()
        {
            AlterColumn("dbo.TaskInstances", "UserId", c => c.Int(nullable: false));
        }
    }
}
