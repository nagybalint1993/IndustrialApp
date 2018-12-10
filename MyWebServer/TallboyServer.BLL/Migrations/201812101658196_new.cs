namespace IndustrialAppServer.BLL.Migrations
{
    using System;
    using System.Data.Entity.Migrations;
    
    public partial class _new : DbMigration
    {
        public override void Up()
        {
            AddColumn("dbo.Types", "UUID", c => c.String());
        }
        
        public override void Down()
        {
            DropColumn("dbo.Types", "UUID");
        }
    }
}
