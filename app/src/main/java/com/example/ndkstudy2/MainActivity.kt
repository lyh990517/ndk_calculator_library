package com.example.ndkstudy2

import androidx.appcompat.app.AppCompatActivity
import android.os.Bundle
import android.widget.TextView
import com.example.ndkstudy2.databinding.ActivityMainBinding

class MainActivity : AppCompatActivity() {

    private lateinit var binding: ActivityMainBinding

    override fun onCreate(savedInstanceState: Bundle?) {
        super.onCreate(savedInstanceState)

        binding = ActivityMainBinding.inflate(layoutInflater)
        setContentView(binding.root)

    }

    /**
     * A native method that is implemented by the 'ndkstudy2' native library,
     * which is packaged with this application.
     */

    companion object {
        // Used to load the 'ndkstudy2' library on application startup.
        init {
            System.loadLibrary("ndkstudy2")
        }
    }
}