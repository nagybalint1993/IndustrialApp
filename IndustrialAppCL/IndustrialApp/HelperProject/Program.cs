using IndustrialApp.Presenter;
using System;
using System.Collections.Generic;
using System.Diagnostics;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace HelperProject
{
    class Program
    {
        static void Main(string[] args)
        {
            Presenter presenter = Presenter.GetPresenter();
            presenter.Start();

            Debug.WriteLine(presenter.currentTaskElement.TypeId);
            presenter.TaskElementDone();

            Debug.WriteLine(presenter.currentTaskElement.TypeId);
            presenter.TaskElementDone();

            Debug.WriteLine(presenter.currentTaskElement.TypeId);
            presenter.TaskElementDone();

        }
    }
}
