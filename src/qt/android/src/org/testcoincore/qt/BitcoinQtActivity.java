package org.testcoincore.qt;

import android.os.Bundle;
import android.system.ErrnoException;
import android.system.Os;

import org.qtproject.qt5.android.bindings.QtActivity;

import java.io.File;

public class TestcoinQtActivity extends QtActivity
{
    @Override
    public void onCreate(Bundle savedInstanceState)
    {
        final File testcoinDir = new File(getFilesDir().getAbsolutePath() + "/.testcoin");
        if (!testcoinDir.exists()) {
            testcoinDir.mkdir();
        }

        super.onCreate(savedInstanceState);
    }
}
