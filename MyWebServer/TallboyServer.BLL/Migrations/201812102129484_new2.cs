namespace IndustrialAppServer.BLL.Migrations
{
    using System;
    using System.Data.Entity.Migrations;
    
    public partial class new2 : DbMigration
    {
        public override void Up()
        {
            AddColumn("dbo.Containers", "ContainerImageId", c => c.Int(nullable: false));

        }
        
        public override void Down()
        {
            DropColumn("dbo.Containers", "ContainerImageId");
        }
    }
}
