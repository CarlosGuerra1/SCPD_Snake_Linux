#ifdef HAVE_CONFIG_H
#  include <config.h>
#endif

#include <gtk/gtk.h>

#include "callbacks.h"
#include "interface.h"
#include "support.h"


void
on_window1_destroy                     (GtkObject       *object,
                                        gpointer         user_data)
{
	gtk_exit(0);
}


gboolean
on_window1_key_press_event             (GtkWidget       *widget,
                                        GdkEventKey     *event,
                                        gpointer         user_data)
{

  return FALSE;
}


void
on_nuevo1_activate                     (GtkMenuItem     *menuitem,
                                        gpointer         user_data)
{

}


void
on_salir1_activate                     (GtkMenuItem     *menuitem,
                                        gpointer         user_data)
{
	on_window1_destroy(menuitem, user_data);
}


void
on_acerca_de1_activate                 (GtkMenuItem     *menuitem,
                                        gpointer         user_data)
{

}


gboolean
on_drawingarea1_configure_event        (GtkWidget       *widget,
                                        GdkEventConfigure *event,
                                        gpointer         user_data)
{

  return FALSE;
}


gboolean
on_drawingarea1_expose_event           (GtkWidget       *widget,
                                        GdkEventExpose  *event,
                                        gpointer         user_data)
{

  return FALSE;
}

